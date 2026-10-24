# Library Management System

A dynamic collection of book records. The growable array doubles capacity with `realloc`, guards against multiplication overflow, sorts with `qsort` using two different comparators, and releases its buffer on every exit path.

## Files

- `library.c`

## Build and run

```sh
gcc -std=c11 -Wall -Wextra -Wpedantic library.c -o library
./library
```

## Sample run

Input:

```text
(no input)
```

Output:

```text
loaded=4 capacity=4
-- by id --
101  Algorithms             Sedgewick    copies=2
102  Compilers              Aho          copies=1
103  Operating Systems      Silberschatz copies=5
104  C Programming Language Kernighan    copies=3
-- by title --
Algorithms
C Programming Language
Compilers
Operating Systems
lookup 103: Operating Systems (copies=5)
total copies=11
```

## Notes

`qsort` needs a total order: comparators return negative, zero, or positive. `(x > y) - (x < y)` avoids the signed overflow that `x - y` can produce on extreme values. Passing `sizeof *items` (not a hard-coded type size) keeps allocations correct if the element type changes.

## `library.c`

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

typedef struct {
    int id;
    char title[80];
    char author[60];
    int copies;
} Book;

typedef struct {
    Book *items;
    size_t size;
    size_t capacity;
} Library;

static int library_init(Library *lib, size_t cap) {
    lib->items = calloc(cap, sizeof *lib->items);
    if (lib->items == NULL) return 0;
    lib->size = 0;
    lib->capacity = cap;
    return 1;
}

static void library_free(Library *lib) {
    free(lib->items);
    lib->items = NULL;
    lib->size = lib->capacity = 0;
}

static int library_push(Library *lib, Book b) {
    if (lib->size == lib->capacity) {
        size_t next = lib->capacity * 2;
        if (next < lib->capacity) return 0;                    /* overflow guard */
        if (next > SIZE_MAX / sizeof *lib->items) return 0;
        Book *tmp = realloc(lib->items, next * sizeof *tmp);
        if (tmp == NULL) return 0;                             /* old block still valid */
        lib->items = tmp;
        lib->capacity = next;
    }
    lib->items[lib->size++] = b;
    return 1;
}

static int by_id(const void *a, const void *b) {
    int x = ((const Book *)a)->id;
    int y = ((const Book *)b)->id;
    return (x > y) - (x < y);                                  /* no overflow, unlike subtraction */
}

static int by_title(const void *a, const void *b) {
    return strcmp(((const Book *)a)->title, ((const Book *)b)->title);
}

static Book *find_id(Library *lib, int id) {
    for (size_t i = 0; i < lib->size; ++i)
        if (lib->items[i].id == id) return &lib->items[i];
    return NULL;
}

int main(void) {
    Library lib;
    if (!library_init(&lib, 2)) { fputs("allocation failed\n", stderr); return 1; }

    const char *titles[] = {"C Programming Language", "Algorithms", "Operating Systems", "Compilers"};
    const char *authors[] = {"Kernighan", "Sedgewick", "Silberschatz", "Aho"};
    int ids[] = {104, 101, 103, 102};
    int copies[] = {3, 2, 5, 1};

    for (int i = 0; i < 4; ++i) {
        Book b = {.id = ids[i], .copies = copies[i]};
        snprintf(b.title, sizeof b.title, "%s", titles[i]);
        snprintf(b.author, sizeof b.author, "%s", authors[i]);
        if (!library_push(&lib, b)) { fputs("grow failed\n", stderr); library_free(&lib); return 1; }
    }

    printf("loaded=%zu capacity=%zu\n", lib.size, lib.capacity);
    qsort(lib.items, lib.size, sizeof *lib.items, by_id);
    puts("-- by id --");
    for (size_t i = 0; i < lib.size; ++i)
        printf("%03d  %-22s %-12s copies=%d\n", lib.items[i].id, lib.items[i].title,
               lib.items[i].author, lib.items[i].copies);

    qsort(lib.items, lib.size, sizeof *lib.items, by_title);
    puts("-- by title --");
    for (size_t i = 0; i < lib.size; ++i) printf("%s\n", lib.items[i].title);

    Book *b = find_id(&lib, 103);
    printf("lookup 103: %s (copies=%d)\n", b ? b->title : "not found", b ? b->copies : 0);

    int total = 0;
    for (size_t i = 0; i < lib.size; ++i) total += lib.items[i].copies;
    printf("total copies=%d\n", total);

    library_free(&lib);
    return 0;
}
```
