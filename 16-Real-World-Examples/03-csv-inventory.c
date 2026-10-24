#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[32];
    double price;
} Item;

int main(void) {
    const char *text = "1,Apple,1.50\n2,Banana,0.75\n3,Cherry,2.00\n";
    char buf[256];
    if (snprintf(buf, sizeof buf, "%s", text) >= (int)sizeof buf) {
        fputs("input too large\n", stderr);
        return 1;
    }
    Item items[8];
    size_t n = 0;
    char *line = strtok(buf, "\n");
    while (line && n < 8) {
        int id;
        char name[32];
        double price;
        if (sscanf(line, "%d,%31[^,],%lf", &id, name, &price) == 3) {
            items[n].id = id;
            snprintf(items[n].name, sizeof items[n].name, "%s", name);
            items[n].price = price;
            ++n;
        } else {
            fprintf(stderr, "bad line: %s\n", line);
        }
        line = strtok(NULL, "\n");
    }
    printf("loaded %zu items\n", n);
    double total = 0;
    for (size_t i = 0; i < n; ++i) {
        printf("%d %-10s $%.2f\n", items[i].id, items[i].name, items[i].price);
        total += items[i].price;
    }
    printf("total=$%.2f\n", total);
    return 0;
}
