# Compiler, Debugger, and Workflow

## Compile
`gcc -std=c11 -Wall -Wextra -Wpedantic -Wconversion -g main.c -o app`

- `-std=c11`: select the language standard.
- `-Wall -Wextra -Wpedantic`: request useful diagnostics.
- `-g`: include debugger information.
- `-o app`: choose the executable name.

## Run and inspect
- Linux/macOS: `./app`; Windows PowerShell: `./app.exe`.
- Debug with GDB: `gdb ./app`, then `break main`, `run`, `next`, `print variable`, `backtrace`, `quit`.
- For memory bugs, if available: `gcc -fsanitize=address,undefined -g main.c -o app`.
- Format consistently; `clang-format` can automate style.

## Translation pipeline
See `17-Images/01-compilation-pipeline.png`: preprocessing, compilation, assembly, linking. `gcc -E main.c` shows preprocessed text; `gcc -S main.c` emits assembly; `gcc -c main.c` emits an object file.
