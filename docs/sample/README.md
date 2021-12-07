# Sample Compat Addon

## Quick start

1. Download hemtt.exe, and place it in the same directory of this file
2. Change mod name in file `.hemtt\base.toml`
   - `ChangeMe001` to you mod unique name (no space)
   - `YourName` to your name
3. Then in file `addons\main\$PBOPREFIX$`
   - `ChangeMe001` to you mod unique name (no space), exactly the same value used in `.hemtt\base.toml`
4. And in `addons\main\config.cpp`
   - `ChangeMe001` to you mod unique name (no space), exactly the same value used in `.hemtt\base.toml`
   - `YourName` to your name
5. Write config in `addons\main\config.cpp`
   - Follow instructions on [Main page](../../README.md)
6. Run HEMTT using command line : `hemtt build`
7. Add this directory as local addon in Arma 3 Launcher
8. Launch Arma 3 and it's done !

