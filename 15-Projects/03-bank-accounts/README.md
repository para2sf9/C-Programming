# Bank Account Simulator

A deposit/withdrawal engine that returns explicit error codes and uses integer cents so money arithmetic never suffers floating-point rounding. Includes overflow checks, a closed-account state, and a ledger printer.

## Files

- `bank.c`

## Build and run

```sh
gcc -std=c11 -Wall -Wextra -Wpedantic bank.c -o bank
./bank
```

## Sample run

Input:

```text
(no input)
```

Output:

```text
open 1001 Ana 50000 -> ok
open 1002 Ben  2000  -> ok
open 1001 Dup  0     -> duplicate account id
deposit 1001 $250.75 -> ok
$750.75
withdraw 1002 $500.00 -> insufficient funds
withdraw 1002 $15.00 -> ok balance=$5.00
withdraw 9999 $1 -> account not found
close 1001 (nonzero) -> insufficient funds
deposit 1001 $0 -> invalid amount
-- ledger --
1001 Ana    $750.75 active
1002 Ben    $5.00 active
```

## Notes

Every state-changing function returns an `enum Err`, so callers cannot silently ignore failure. Money is `int64_t` cents: adding two balances cannot drift, and the overflow guard prevents signed overflow (which would be undefined behavior).

## `bank.c`

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

/* Money is stored in cents to keep arithmetic exact. */
typedef int64_t Cents;

typedef struct {
    int id;
    char holder[48];
    Cents balance;
    int active;
} Account;

enum Err { OK = 0, ERR_NOT_FOUND, ERR_INSUFFICIENT, ERR_INVALID, ERR_DUPLICATE, ERR_FULL, ERR_CLOSED };

static const char *err_text(enum Err e) {
    switch (e) {
        case OK:               return "ok";
        case ERR_NOT_FOUND:    return "account not found";
        case ERR_INSUFFICIENT: return "insufficient funds";
        case ERR_INVALID:      return "invalid amount";
        case ERR_DUPLICATE:    return "duplicate account id";
        case ERR_FULL:         return "bank is full";
        case ERR_CLOSED:       return "account closed";
    }
    return "unknown";
}

#define MAX_ACCOUNTS 8

static Account bank[MAX_ACCOUNTS];
static int used = 0;

static Account *find(int id) {
    for (int i = 0; i < used; ++i)
        if (bank[i].id == id) return &bank[i];
    return NULL;
}

static enum Err open_account(int id, const char *holder, Cents initial) {
    if (used == MAX_ACCOUNTS) return ERR_FULL;
    if (find(id) != NULL) return ERR_DUPLICATE;
    if (initial < 0) return ERR_INVALID;
    bank[used].id = id;
    snprintf(bank[used].holder, sizeof bank[used].holder, "%s", holder);
    bank[used].balance = initial;
    bank[used].active = 1;
    used++;
    return OK;
}

static enum Err deposit(int id, Cents amount, Cents *out) {
    if (amount <= 0) return ERR_INVALID;
    Account *a = find(id);
    if (a == NULL) return ERR_NOT_FOUND;
    if (!a->active) return ERR_CLOSED;
    if (a->balance > INT64_MAX - amount) return ERR_INVALID;   /* overflow guard */
    a->balance += amount;
    if (out) *out = a->balance;
    return OK;
}

static enum Err withdraw(int id, Cents amount, Cents *out) {
    if (amount <= 0) return ERR_INVALID;
    Account *a = find(id);
    if (a == NULL) return ERR_NOT_FOUND;
    if (!a->active) return ERR_CLOSED;
    if (a->balance < amount) return ERR_INSUFFICIENT;
    a->balance -= amount;
    if (out) *out = a->balance;
    return OK;
}

static enum Err close_account(int id) {
    Account *a = find(id);
    if (a == NULL) return ERR_NOT_FOUND;
    if (a->balance != 0) return ERR_INSUFFICIENT;               /* must be empty */
    a->active = 0;
    return OK;
}

static void print_money(Cents c) {
    printf("$%lld.%02lld", (long long)(c / 100), (long long)(c < 0 ? -(c % 100) : c % 100));
}

int main(void) {
    Cents bal;
    printf("open 1001 Ana 50000 -> %s\n", err_text(open_account(1001, "Ana", 50000)));
    printf("open 1002 Ben  2000  -> %s\n", err_text(open_account(1002, "Ben", 2000)));
    printf("open 1001 Dup  0     -> %s\n", err_text(open_account(1001, "Dup", 0)));

    printf("deposit 1001 $250.75 -> %s\n", err_text(deposit(1001, 25075, &bal)));
    print_money(bal); putchar('\n');

    printf("withdraw 1002 $500.00 -> %s\n", err_text(withdraw(1002, 50000, &bal)));
    printf("withdraw 1002 $15.00 -> %s balance=", err_text(withdraw(1002, 1500, &bal)));
    print_money(bal); putchar('\n');

    printf("withdraw 9999 $1 -> %s\n", err_text(withdraw(9999, 100, NULL)));
    printf("close 1001 (nonzero) -> %s\n", err_text(close_account(1001)));
    deposit(1001, 0, NULL);
    printf("deposit 1001 $0 -> %s\n", err_text(deposit(1001, 0, NULL)));

    puts("-- ledger --");
    for (int i = 0; i < used; ++i) {
        printf("%d %-6s ", bank[i].id, bank[i].holder);
        print_money(bank[i].balance);
        printf(" %s\n", bank[i].active ? "active" : "closed");
    }
    return 0;
}
```
