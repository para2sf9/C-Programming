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
