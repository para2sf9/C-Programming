# Real-World Examples

Small, self-contained programs that show how C is used outside textbook exercises.

- `01-embedded-register.c` — memory-mapped register simulation with `volatile` and bit masks.
- `02-bump-allocator.c` — a tiny arena allocator with alignment and overflow checks.
- `03-csv-inventory.c` — parsing comma-separated records into structs with validation.
- `04-ipv4-header.c` — byte-level IPv4 header parsing and checksum verification.
- `05-cache-matrix.c` — comparing loop orders for matrix multiplication locality.

Compile any example with:
```sh
gcc -std=c11 -Wall -Wextra -Wpedantic -O2 file.c -o app
./app
```
