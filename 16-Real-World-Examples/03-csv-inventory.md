# CSV Inventory Parser

Parses a simple comma-separated inventory into an array of structs. It validates each line with `sscanf`, copies strings with bounded lengths, and prints a running total. This pattern appears in embedded logging, price lists, and configuration ingestion.

Key points:
- `sscanf` with `%31[^,]` reads up to 31 characters, leaving room for the terminator.
- `strtok` splits lines here because the buffer is local and the loop is single-threaded.
- Always check `snprintf` truncation when copying an external string into a fixed buffer.

## Output
```text
loaded 3 items
1 Apple      $1.50
2 Banana     $0.75
3 Cherry     $2.00
total=$4.25
```
