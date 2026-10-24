#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    unsigned long lines;
    unsigned long words;
    unsigned long chars;
    unsigned long blank_lines;
    unsigned long longest_word;
    char longest[64];
} Stats;

static void stats_init(Stats *s) {
    memset(s, 0, sizeof *s);
}

static int analyze_stream(FILE *in, Stats *s) {
    char line[1024];
    while (fgets(line, sizeof line, in) != NULL) {
        s->lines++;
        size_t len = strlen(line);
        s->chars += (unsigned long)len;

        int only_space = 1;
        for (size_t i = 0; i < len; ++i)
            if (!isspace((unsigned char)line[i])) { only_space = 0; break; }
        if (only_space) s->blank_lines++;

        size_t i = 0;
        while (i < len) {
            while (i < len && isspace((unsigned char)line[i])) i++;
            size_t start = i;
            while (i < len && !isspace((unsigned char)line[i])) i++;
            size_t wlen = i - start;
            if (wlen > 0) {
                s->words++;
                if (wlen > s->longest_word && wlen < sizeof s->longest) {
                    s->longest_word = (unsigned long)wlen;
                    memcpy(s->longest, line + start, wlen);
                    s->longest[wlen] = '\0';
                }
            }
        }
    }
    if (ferror(in)) return 0;
    return 1;
}

static int write_report(const char *path, const Stats *s) {
    FILE *out = fopen(path, "w");
    if (out == NULL) return 0;
    int ok = fprintf(out,
        "lines=%lu\nwords=%lu\nchars=%lu\nblank=%lu\nlongest=%s (%lu)\n",
        s->lines, s->words, s->chars, s->blank_lines, s->longest, s->longest_word) > 0;
    if (fclose(out) != 0) ok = 0;
    return ok;
}

int main(void) {
    const char *src = "sample.txt";
    FILE *f = fopen(src, "w");
    if (f == NULL) { perror("fopen write"); return 1; }
    fputs("The quick brown fox\njumps over the lazy dog.\n\n"
          "C gives explicit control over memory.\n   \n", f);
    if (fclose(f) != 0) { perror("fclose"); return 1; }

    f = fopen(src, "r");
    if (f == NULL) { perror("fopen read"); return 1; }

    Stats s;
    stats_init(&s);
    int ok = analyze_stream(f, &s);
    if (fclose(f) != 0) { perror("fclose"); return 1; }
    if (!ok) { fputs("read error\n", stderr); return 1; }

    printf("lines=%lu words=%lu chars=%lu blank=%lu\n",
           s.lines, s.words, s.chars, s.blank_lines);
    printf("longest word: %s (%lu chars)\n", s.longest, s.longest_word);

    if (!write_report("report.txt", &s)) { fputs("report write failed\n", stderr); return 1; }
    puts("report.txt written");
    return 0;
}
