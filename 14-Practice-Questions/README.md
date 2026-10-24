# Practice Questions

Two workbooks, both with complete solutions and captured output:

- `patterns/PATTERN-PROBLEMS.md` — 20 printing problems: triangles, pyramids, diamonds, hollow shapes, number and alphabet patterns, Pascal's triangle, and grids. Builds nested-loop and boundary-condition fluency.
- `real-time-problems/REAL-TIME-PROBLEMS.md` — 29 scenario problems: progressive electricity billing, parking and shipping fees, payroll with overtime, sensor averaging and clamping, stock alerts, ATM denominations, rate limiting, packet length validation, checksums, CSV parsing, fixed-point money, circular buffers, bit flags, and log tallying.

Every solution source is saved under the `code/` subfolder so you can compile it directly:
`gcc -std=c11 -Wall -Wextra -Wpedantic patterns_code/patterns_01.c -o p && ./p`

## Suggested workflow
1. Read the problem statement only; restate the rules in your own words and list boundary cases.
2. Write the solution using constants first so formatting is deterministic.
3. Compare output. If yours differs, diff the logic, not the formatting.
4. Replace constants with validated input (`fgets` + `strtol`/`strtod`, with range checks).
5. Extend each problem with at least one new test case.

## Extra answer-quality hints
- For money, prefer integer cents when exact decimal rounding matters.
- For "started hour" style rules, the rounding-up expression `(minutes + 59) / 60` handles positive values.
- For tiered pricing, subtract each consumed tier from the remaining quantity.
- For ring buffers, the modulo operation wraps the index; keep `capacity` fixed and derive the oldest element from the write cursor.
- For binary data, document widths and byte order instead of copying a raw struct to a file.
