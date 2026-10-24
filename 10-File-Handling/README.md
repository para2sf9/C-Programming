# 10 — File Handling

`FILE *` represents a stream. Check `fopen`; use `fgets` / `fprintf` for text and `fread` / `fwrite` for binary data. Check write/read results, close streams, and distinguish end-of-file from input errors.

![File I/O](../17-Images/08-file-io.png)

Binary files containing raw structs are not generally portable across compilers, endianness, padding, or versions. Prefer a specified serialization format for durable interchange.

### Exercise
Write three records to a text file and read them back. Check every file operation.

## Runnable example

Source: `code/file_io.c`

```c
#include <stdio.h>

int main(void) {
    const char *path = "lesson-output.txt";
    FILE *f = fopen(path, "w");
    if (f == NULL) { perror("fopen"); return 1; }
    if (fprintf(f, "temperature=23\n") < 0) { fclose(f); return 1; }
    if (fclose(f) != 0) { perror("fclose"); return 1; }
    f = fopen(path, "r");
    if (f == NULL) { perror("fopen"); return 1; }
    char line[64];
    if (fgets(line, sizeof line, f) != NULL) printf("read: %s", line);
    fclose(f);
    return 0;
}
```

Observed output:

```text
read: temperature=23
```

## Practice
1. Explain every line without looking at the comments.
2. Change an input or constant and predict the output.
3. Compile with warnings and fix all warnings.
