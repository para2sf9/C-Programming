# IPv4 Header Parser

Parses a raw byte buffer as an IPv4 header and verifies the header checksum using the standard ones'-complement algorithm. This is the kind of low-level work C does in networking stacks, packet sniffers, and firmware.

Key points:
- Network protocols are defined in terms of exact byte layouts; structs with padding are not portable for on-the-wire formats.
- The checksum is computed on the header only, not the payload.
- After writing the checksum into the packet, recomputing over the same range should yield `0x0000`.

## Output
```text
computed checksum=0x9D06
version=4 ihl=20 bytes ttl=64 proto=6
src=192.168.1.1 dst=10.0.0.1
verify checksum=0xFFFF (0x0000 = valid)
```
