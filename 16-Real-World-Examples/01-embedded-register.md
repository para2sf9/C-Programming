# Embedded Register Simulation

Demonstrates how C is used to talk to memory-mapped hardware: a `volatile` array acts as register storage, and macros define bit masks. `volatile` prevents the compiler from removing or reordering accesses that have side effects on hardware.

Key points:
- Use `volatile` for memory that changes outside the program's control.
- Use unsigned masks and test with `value & MASK`.
- Clear a bit with `value &= ~MASK`; set with `value |= MASK`.

## Output
```text
ctrl=0x00000003 enable=1 irq=1 mode=0
ready=0
ready=1
after disable=0x00000002
```
