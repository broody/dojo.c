# dojo.unity

Unity SDK for interacting with Dojo. This package provides C# bindings for the Torii Client SDK. The approach is to generate a C client using `cbindgen` which is the subsequently wrapped in a C# SDK.

## Running

```
cargo build --release
gcc example/main.c -L target/release -l torii_unity -I ..
```