# Cache-Aware Matrix Multiply

Compares a naive `i-j-k` order multiplication against an `i-k-j` order that is friendlier to the cache. In the blocked order, accesses to `C[i][j]` and `B[k][j]` stride through memory sequentially, improving spatial locality.

Key points:
- Loop order matters more than micro-optimisations for large matrices.
- Flattened 1D indexing keeps the data contiguous and avoids variable-length array portability concerns.
- `clock()` measures CPU time; wall-clock time would need platform-specific APIs.

## Output
```text
naive=0.009s blocked=0.004s sum=33554432.0
```
