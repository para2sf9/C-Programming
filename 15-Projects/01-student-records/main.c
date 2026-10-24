#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "records.h"

#define DATA_FILE "students.txt"
#define MAX_STUDENTS 100

static Student db[MAX_STUDENTS];
static int count = 0;

static void load(void) {
    FILE *f = fopen(DATA_FILE, "r");
    if (!f) return;
    while (count < MAX_STUDENTS &&
           fscanf(f, "%63s %d %lf", db[count].name, &db[count].score_count, &db[count].average) == 3) {
        count++;
    }
    fclose(f);
}

static int save(void) {
    FILE *f = fopen(DATA_FILE, "w");
    if (!f) return 0;
    for (int i = 0; i < count; ++i)
        fprintf(f, "%s %d %.2f\n", db[i].name, db[i].score_count, db[i].average);
    return fclose(f) == 0;
}

static int find(const char *name) {
    for (int i = 0; i < count; ++i)
        if (strcmp(db[i].name, name) == 0) return i;
    return -1;
}

int main(void) {
    char line[128];
    load();
    while (fgets(line, sizeof line, stdin)) {
        char cmd[16] = {0};
        if (sscanf(line, "%15s", cmd) != 1) continue;

        if (strcmp(cmd, "add") == 0) {
            Student s;
            if (sscanf(line, "%*s %63s %d %lf", s.name, &s.score_count, &s.average) == 3) {
                if (count >= MAX_STUDENTS) { puts("error: database full"); continue; }
                if (find(s.name) >= 0) { puts("error: duplicate name"); continue; }
                db[count++] = s;
                printf("added %s (%.2f)\n", s.name, s.average);
            } else puts("error: usage add <name> <subjects> <average>");
        } else if (strcmp(cmd, "list") == 0) {
            if (count == 0) puts("(no students)");
            for (int i = 0; i < count; ++i)
                printf("%-10s subjects=%d average=%.2f\n", db[i].name, db[i].score_count, db[i].average);
        } else if (strcmp(cmd, "avg") == 0) {
            if (count == 0) { puts("no data"); continue; }
            double total = 0;
            for (int i = 0; i < count; ++i) total += db[i].average;
            printf("class average=%.2f\n", total / count);
        } else if (strcmp(cmd, "top") == 0) {
            if (count == 0) { puts("no data"); continue; }
            int best = 0;
            for (int i = 1; i < count; ++i) if (db[i].average > db[best].average) best = i;
            printf("top=%s %.2f\n", db[best].name, db[best].average);
        } else if (strcmp(cmd, "del") == 0) {
            char name[64];
            if (sscanf(line, "%*s %63s", name) != 1) { puts("error: usage del <name>"); continue; }
            int i = find(name);
            if (i < 0) { puts("error: not found"); continue; }
            for (int j = i; j < count - 1; ++j) db[j] = db[j + 1];
            count--;
            printf("deleted %s\n", name);
        } else if (strcmp(cmd, "save") == 0) {
            puts(save() ? "saved" : "error: cannot write file");
        } else if (strcmp(cmd, "quit") == 0) {
            puts("bye");
            break;
        } else {
            puts("unknown command");
        }
    }
    return 0;
}
