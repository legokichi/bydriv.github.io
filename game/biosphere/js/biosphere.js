function popcnt(bits) {
    bits = (bits & 0x55555555) + (bits >> 1 & 0x55555555);
    bits = (bits & 0x33333333) + (bits >> 2 & 0x33333333);
    bits = (bits & 0x0f0f0f0f) + (bits >> 4 & 0x0f0f0f0f);
    bits = (bits & 0x00ff00ff) + (bits >> 8 & 0x00ff00ff);
    return (bits & 0x0000ffff) + (bits >>16 & 0x0000ffff);
}

function createLife(species, x, y) {
    return {
        species: species,
        individual: {
            genome: species.genome,
            energy: 60,
            vector: [0, 0],
            x: x,
            y: y
        }
    };
}

function cloneLife(life) {
    let genome = mutate(life.individual.genome);

    if ((popcnt((life.individual.genome[0] >>> 8) ^ 0b110000111100001111000011) >= 12) !== (popcnt((genome[0] >>> 8) ^ 0b110000111100001111000011) >= 12))
        genome = life.individual.genome;

    return {
        species: life.species,
        individual: {
            genome: genome,
            energy: 60,
            vector: [0, 0],
            x: life.individual.x + Math.floor(Math.random() * 25) - 12,
            y: life.individual.y + Math.floor(Math.random() * 25) - 12
        }
    };
}

function addLife(life, areas) {
    for (let i = 0; i < areas.length; ++i) {
        const area = areas[i];
        if (area.left <= life.individual.x && life.individual.x < area.right && area.top <= life.individual.y && life.individual.y < area.bottom) {
            area.lifes.push(life);
            return;
        }
    }

    const i = Math.floor(life.individual.x / 64);
    const j = Math.floor(life.individual.y / 64);

    areas.push({
        left: i * 64,
        right: i * 64 + 64,
        top: j * 64,
        bottom: j * 64 + 64,
        lifes: [life]
    });
}

function mutate(genome) {
    const i = Math.floor(Math.random() * genome.length);
    const j = Math.floor(Math.random() * 32);
    const newGenome = [].concat(genome);
    newGenome[i] = (newGenome[i] ^ (1 << j)) >>> 0;
    return newGenome;
}

function drawState(state, canvas) {
    const context = canvas.getContext("2d");
    const image = new ImageData(canvas.width, canvas.height);

    for (var i = 0; i < image.data.length; i += 4)
        image.data[i + 3] = 0xFF;

    state.areas.forEach(function (area) {
        area.lifes.forEach(function (life) {
            const x = life.individual.x;
            const y = life.individual.y;
            if (0 <= x && x < image.width && 0 <= y && y < image.height) {
                image.data[(y * image.width + x) * 4] = life.individual.genome[0] >> 24 & 0xFF;
                image.data[(y * image.width + x) * 4 + 1] = life.individual.genome[0] >> 16 & 0xFF;
                image.data[(y * image.width + x) * 4 + 2] = life.individual.genome[0] >> 8 & 0xFF;
            }
        });
    });

    context.putImageData(image, 0, 0);
}

window.addEventListener("load", () => {
    let state = {
        areas: []
    };

    const canvas = document.getElementById("biosphere");
    const context = canvas.getContext("2d");
    context.imageSmoothingEnabled = false;

    for (var i = 0; i < 5000; ++i) {
        const species = {
            genome: [
                Math.floor(Math.random() * 0x100000000),
                Math.floor(Math.random() * 0x100000000)
            ]
        };

        addLife(createLife(species, Math.floor(Math.random() * canvas.width), Math.floor(Math.random() * canvas.height)), state.areas);
    }

    const mode = document.getElementById("mode");

    var recording = false;
    var recorder = null;

    requestAnimationFrame(function step() {
        const canvas = document.getElementById("biosphere");
        const newAreas = [];

        if (!recording && mode["record-mode"].checked) {
            const canvasStream = canvas.captureStream();
            recorder = new MediaRecorder(canvasStream);
            const chunks = [];

            recorder.addEventListener("dataavailable", function (e) {
                chunks.push(e.data);
            });

            recorder.addEventListener("stop", function () {
              const blob = new Blob(chunks, {"type": "video/mpeg"});
              const url = URL.createObjectURL(blob);
              const video = document.createElement("video");
              video.src = url;
              video.controls = true;
              const a = document.createElement("a");
              const text = document.createTextNode("download");
              a.href = url;
              a.appendChild(text);
              document.querySelector("#downloads").appendChild(video);
              document.querySelector("#downloads").appendChild(a);
              recorder = null;
            });

            recorder.start();
            recording = true;
        }

        if (recording && !mode["record-mode"].checked) {
            recorder.stop();
            recording = false;
        }

        state.areas.forEach(function (area) {
            for (let i = 0; i < area.lifes.length; ++i) {
                const life = area.lifes[i];

                if (popcnt((life.individual.genome[0] >>> 8) ^ 0b110000111100001111000011) >= 12) {
                    // plants
                    if (Math.floor(Math.random() * 75) === 0)
                        life.individual.energy = 120;
                    else
                        --life.individual.energy;

                    for (let j = 0; j < area.lifes.length; ++j) {
                        const ljfe = area.lifes[j];

                        if (life.individual.x !== ljfe.individual.x || life.individual.y !== ljfe.individual.y)
                            continue;

                        if (popcnt(life.individual.genome[0] ^ ljfe.individual.genome[0]) < 4)
                            continue;

                        if (popcnt((life.individual.genome[0] >>> 8) ^ (ljfe.individual.genome[1] >>> 8)) < 12)
                            continue;

                        life.individual.energy = 0;
                        break;
                    }
                } else {
                    // animals
                    --life.individual.energy;

                    for (let j = 0; j < area.lifes.length; ++j) {
                        const ljfe = area.lifes[j];

                        if (life.individual.x !== ljfe.individual.x || life.individual.y !== ljfe.individual.y)
                            continue;

                        if (popcnt(life.individual.genome[0] ^ ljfe.individual.genome[0]) < 4)
                            continue;

                        if (popcnt((ljfe.individual.genome[0] >>> 8) ^ 0b110000111100001111000011) >= 12)
                            continue;

                        if (popcnt((life.individual.genome[0] >>> 8) ^ (ljfe.individual.genome[1] >>> 8)) < 12)
                            continue;

                        life.individual.energy = 0;
                        break;
                    }

                    if (life.individual.energy > 0)
                        for (let j = 0; j < area.lifes.length; ++j) {
                            const ljfe = area.lifes[j];

                            if (life.individual.x !== ljfe.individual.x || life.individual.y !== ljfe.individual.y)
                                continue;

                            if (popcnt(life.individual.genome[0] ^ ljfe.individual.genome[0]) < 4)
                                continue;

                            if (popcnt((life.individual.genome[1] >>> 8) ^ (ljfe.individual.genome[0] >>> 8)) < 12)
                                continue;

                            life.individual.energy = 120;
                            break;
                        }

                    for (let j = 0; j < area.lifes.length; ++j) {
                        const ljfe = area.lifes[j];

                        if (popcnt(life.individual.genome[0] ^ ljfe.individual.genome[0]) < 4)
                            continue;

                        if (popcnt((life.individual.genome[1] >>> 8) ^ (ljfe.individual.genome[0] >>> 8)) < 12)
                            continue;

                        life.individual.vector[0] = ljfe.individual.x - life.individual.x;
                        life.individual.vector[1] = ljfe.individual.y - life.individual.y;

                        if (Math.abs(life.individual.vector[0]) > 2)
                            life.individual.vector[0] = life.individual.vector[0] / Math.abs(life.individual.vector[0]) * 2;

                        if (Math.abs(life.individual.vector[1]) > 2)
                            life.individual.vector[1] = life.individual.vector[1] / Math.abs(life.individual.vector[1]) * 2;

                        if (Math.floor(Math.random() * 2) === 0)
                            break;
                    }

                    if (life.individual.vector[0] === 0 && life.individual.vector[1] === 0 || Math.floor(Math.random() * 100) === 0) {
                        life.individual.vector[0] = Math.floor(Math.random() * 5) - 2;
                        life.individual.vector[1] = Math.floor(Math.random() * 5) - 2;
                    }

                    life.individual.x += life.individual.vector[0] + Math.floor(Math.random() * 3) - 1;
                    life.individual.y += life.individual.vector[1] + Math.floor(Math.random() * 3) - 1;
                }

                if (life.individual.energy > 0)
                    addLife(life, newAreas);

                if (life.individual.energy > 100) {
                    addLife(cloneLife(life), newAreas);
                    life.individual.energy -= 60;
                }
            }
        });

        const species = {
            genome: [
                Math.floor(Math.random() * 0x100000000),
                Math.floor(Math.random() * 0x100000000)
            ]
        };

        //addLife(createLife(species, Math.floor(Math.random() * canvas.width), Math.floor(Math.random() * canvas.height)), newAreas);

        state.areas = newAreas;
        drawState(state, canvas);
        requestAnimationFrame(step);
    });
});
