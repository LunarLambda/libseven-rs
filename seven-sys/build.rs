use std::env;
use std::path::PathBuf;
use std::process::Command;

fn main() {
    let mut bindings = PathBuf::from(env::var("OUT_DIR").unwrap());
    bindings.push("bindings.rs");

    let output = bindgen::builder()
        .clang_arg("-Ilibseven/include")
        .ctypes_prefix("::core::ffi")
        .header("bindgen.h")
        .rust_target(bindgen::RustTarget::Nightly)
        .use_core()
        .generate()
        .unwrap();

    output.write_to_file(&bindings).unwrap();

    let build =
        Command::new("make")
        .arg("-C")
        .arg("libseven")
        .status()
        .unwrap();

    assert!(build.success());

    let mut libdir = env::current_dir().unwrap();
    libdir.push("libseven/lib");

    println!("cargo:rustc-link-search=native={}", &libdir.display());
    println!("cargo:rustc-link-lib=static=seven");
}
