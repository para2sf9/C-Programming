# Bump Allocator (Arena)

A tiny allocator over a static byte pool. It aligns each allocation to `max_align_t`, bumps an offset, and never frees individual objects; the entire pool is reset at once. This pattern appears in compilers, games, and network stacks where bulk deallocation is acceptable.

Key points:
- Alignment prevents undefined behavior when the returned pointer is used for types with stricter alignment than `char`.
- Overflow checks keep the arithmetic safe before indexing past the pool.
- No per-object metadata means very low overhead.

## Output
```text
a=0x5634bcf28040 b=0x5634bcf28060 c=0x5634bcf28070 offset=72
a[4]=5 c[2]=3.30
after reset offset=0
```
