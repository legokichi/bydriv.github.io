window.addEventListener("load", function() {
    wasm_bindgen("./wasm-bindgen/rust_wasm_bindgen_test_bg.wasm").then(function () {
        console.log(
            "deep_thought(\"Answer to the Ultimate Question of Life, the Universe, and Everything\") = "
                + wasm_bindgen.deep_thought("Answer to the Ultimate Question of Life, the Universe, and Everything"));
    }).catch(function (e) {
        console.log(e);
    });
});
