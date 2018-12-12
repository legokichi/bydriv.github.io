/******************************************************************************/
/*                             UTILITY  FUNCTIONS                             */
/******************************************************************************/
function loadImage(src) {
    return new Promise(function (resolve, reject) {
        const img = new Image();
        img.onload = function () {
            resolve(img);
        };
        img.onerror = function (e) {
            reject(e);
        };
        img.src = src;
    });
}

async function initSystem(config) {
    const assets = new Map();
    const promises = config.assets.map(async function (asset) {
        const src = asset[0];

        const img = await loadImage(src);

        return Promise.all(asset[1].map(async function (assetSpec) {
            const name = assetSpec[0];
            const sx = assetSpec[1][0];
            const sy = assetSpec[1][1];
            const sw = assetSpec[1][2];
            const sh = assetSpec[1][3];

            const canvas = document.createElement("canvas");
            canvas.width = sw;
            canvas.height = sh;

            const context = canvas.getContext("2d");
            context.drawImage(img, sx, sy, sw, sh, 0, 0, sw, sh);

            const img_ = await loadImage(canvas.toDataURL());

            assets.set(name, {
                img: img_
            });
        }));
    });

    await Promise.all(promises);

    const offscreenCanvas = document.createElement("canvas");
    const onscreenCanvas = document.createElement("canvas");
    offscreenCanvas.width = config.width;
    offscreenCanvas.height = config.height;
    onscreenCanvas.width = config.width * config.scale;
    onscreenCanvas.height = config.height * config.scale;
    document.getElementById("game").appendChild(onscreenCanvas);

    const offscreenContext = offscreenCanvas.getContext("2d");

    const onscreenContext = onscreenCanvas.getContext("2d");
    onscreenContext.imageSmoothingEnabled = false;

    return {
        offscreen: {
            canvas: offscreenCanvas,
            context: offscreenContext
        },
        onscreen: {
            canvas: onscreenCanvas,
            context: onscreenContext
        },
        assets: assets
    };
}

function eqView(Game, views1, i, views2, j) {
    if (Game.view_is_image(i, views1) && Game.view_is_image(j, views2)) {
        return Game.view_image_x(i, views1) === Game.view_image_x(j, views2)
            && Game.view_image_y(i, views1) === Game.view_image_y(j, views2)
            && Game.view_image_name(i, views1) === Game.view_image_name(j, views2);
    } if (Game.view_is_pattern(i, views1) && Game.view_is_pattern(j, views2)) {
        return Game.view_pattern_x(i, views1) === Game.view_pattern_x(j, views2)
            && Game.view_pattern_y(i, views1) === Game.view_pattern_y(j, views2)
            && Game.view_pattern_width(i, views1) === Game.view_pattern_width(j, views2)
            && Game.view_pattern_height(i, views1) === Game.view_pattern_height(j, views2)
            && Game.view_pattern_name(i, views1) === Game.view_pattern_name(j, views2);
    } else {
        return false;
    }
}

function drawView(Game, canvas, context, assets, views, i) {
    if (Game.view_is_image(i, views)) {
        const dx = Game.view_image_x(i, views);
        const dy = Game.view_image_y(i, views);
        const name = Game.view_image_name(i, views);
        const sprite = assets.get(name);
        context.drawImage(sprite.img, dx, dy);
    } else if (Game.view_is_pattern(i, views)) {
        const dx = Game.view_pattern_x(i, views);
        const dy = Game.view_pattern_y(i, views);
        const width = Game.view_pattern_width(i, views);
        const height = Game.view_pattern_height(i, views);
        const name = Game.view_pattern_name(i, views);
        const sprite = assets.get(name);
        const pattern = context.createPattern(sprite.img, "repeat");
        const fillStyle = context.fillStyle;
        context.fillStyle = pattern;
        context.fillRect(dx, dy, sprite.img.width * width, sprite.img.height * height);
        context.fillStyle = fillStyle;
    } else {
        console.warn("unrecognized view: %o", i);
    }
}

/******************************************************************************/
/*                                  WASM FFI                                  */
/******************************************************************************/
function inputs_length(inputs) {
    return inputs.length;
}

function input_x(i, inputs) {
    return i < inputs.length ? inputs[i].x : null;
}

function input_y(i, inputs) {
    return i < inputs.length ? inputs[i].y : null;
}

function input_button(i, j, inputs) {
    return (i < inputs.length && j < inputs[i].buttons.length)
        ? inputs[i].buttons[j]
        : null;
}

window.addEventListener("load", async function() {
    /**************************************************************************/
    /*                          GAME  CONFIGURATIONS                          */
    /**************************************************************************/
    const response = await fetch("./json/config.json");
    const config = await response.json();

    /**************************************************************************/
    /*                               INIT  WASM                               */
    /**************************************************************************/
    await wasm_bindgen("./wasm/hijack_bg.wasm");

    const Game = wasm_bindgen;

    const keyboardInput = {
        x: 0,
        y: 0,
        buttons: [false, false, false, false, false, false, false, false]
    };

    window.addEventListener("keydown", e => {
        if (e.ctrlKey) {
            switch (e.key) {
            case "b":
                keyboardInput.x = -1;
                return e.preventDefault();
            case "p":
                keyboardInput.y = -1;
                return e.preventDefault();
            case "f":
                keyboardInput.x = 1;
                return e.preventDefault();
            case "n":
                keyboardInput.y = 1;
                return e.preventDefault();
            };
        } else {
            switch (e.key) {
            case "z":
                keyboardInput.buttons[0] = true;
                return e.preventDefault();
            case "x":
                keyboardInput.buttons[1] = true;
                return e.preventDefault();
            case "c":
                keyboardInput.buttons[2] = true;
                return e.preventDefault();
            case "v":
                keyboardInput.buttons[3] = true;
                return e.preventDefault();
            case "h":
            case "a":
            case "Left":
            case "ArrowLeft":
                keyboardInput.x = -1;
                return e.preventDefault();
            case "k":
            case "w":
            case "Up":
            case "ArrowUp":
                keyboardInput.y = -1;
                return e.preventDefault();
            case "l":
            case "d":
            case "Right":
            case "ArrowRight":
                keyboardInput.x = 1;
                return e.preventDefault();
            case "j":
            case "s":
            case "Down":
            case "ArrowDown":
                keyboardInput.y = 1;
                return e.preventDefault();
            };
        }
    });

    window.addEventListener("keyup", e => {
        if (e.ctrlKey) {
            switch (e.key) {
            case "b":
            case "p":
            case "f":
            case "n":
                keyboardInput.x = 0;
                keyboardInput.y = 0;
                return e.preventDefault();
            };
        } else {
            switch (e.key) {
            case "z":
            case "x":
            case "c":
            case "v":
            case "h":
            case "k":
            case "l":
            case "j":
            case "a":
            case "w":
            case "d":
            case "s":
            case "Left":
            case "Up":
            case "Right":
            case "Down":
            case "ArrowLeft":
            case "ArrowUp":
            case "ArrowRight":
            case "ArrowDown":
                keyboardInput.x = 0;
                keyboardInput.y = 0;
                keyboardInput.buttons[0] = false;
                keyboardInput.buttons[1] = false;
                keyboardInput.buttons[2] = false;
                keyboardInput.buttons[3] = false;
                keyboardInput.buttons[4] = false;
                keyboardInput.buttons[5] = false;
                keyboardInput.buttons[6] = false;
                keyboardInput.buttons[7] = false;
                return e.preventDefault();
            };
        }
    });

    const ret = await initSystem(config);

    const offscreen = ret.offscreen;
    const onscreen = ret.onscreen;
    const assets = ret.assets;

    var game = Game.new_();
    var previousViews = undefined;

    requestAnimationFrame(function step() {
        const views = Game.views(game);

        var refresh = false;

        if (previousViews && Game.views_length(previousViews) === Game.views_length(views)) {
            for (var i = 0; i < Game.views_length(views); ++i) {
                if (!eqView(Game, previousViews, i, views, i)) {
                    refresh = true;
                    break;
                }
            }
        } else {
            refresh = true;
        }

        if (refresh) {
            offscreen.context.fillRect(0, 0, offscreen.canvas.width, offscreen.canvas.height);

            for (var i = 0; i < Game.views_length(views); ++i)
                drawView(Game, offscreen.canvas, offscreen.context, assets, views, i);

            onscreen.context.drawImage(
                offscreen.canvas,
                0,
                0,
                offscreen.canvas.width,
                offscreen.canvas.height,
                0,
                0,
                onscreen.canvas.width,
                onscreen.canvas.height
            );
        }

        const inputs = Array.from(navigator.getGamepads()).map(function(gamepad, i) {
            const input = {
                x: i === 0 ? keyboardInput.x : 0,
                y: i === 0 ? keyboardInput.y : 0,
                buttons:
                i === 0
                    ? keyboardInput.buttons.concat()
                    : [false, false, false, false, false, false, false, false]
            };

            if (gamepad) {
                input.x = gamepad.axes[0];
                input.y = gamepad.axes[1];
                input.buttons[0] = gamepad.buttons[0].pressed;
                input.buttons[1] = gamepad.buttons[1].pressed;
                input.buttons[2] = gamepad.buttons[2].pressed;
                input.buttons[3] = gamepad.buttons[3].pressed;
                input.buttons[4] = gamepad.buttons[4].pressed;
                input.buttons[5] = gamepad.buttons[5].pressed;
                input.buttons[6] = gamepad.buttons[6].pressed;
                input.buttons[7] = gamepad.buttons[7].pressed;
                input.buttons[8] = gamepad.buttons[8].pressed;
                input.buttons[9] = gamepad.buttons[9].pressed;
            }

            return input;
        });

        if (inputs.length === 0)
            inputs[0] = {
                x: keyboardInput.x,
                y: keyboardInput.y,
                buttons: keyboardInput.buttons.concat()
            };

        game = Game.step(inputs, game);
        previousViews = views;
        requestAnimationFrame(step);
    });
});