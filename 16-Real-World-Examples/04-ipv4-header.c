#include <stdio.h>
#include <stdint.h>
#include <string.h>

struct ipv4_hdr {
    uint8_t  v_ihl;
    uint8_t  tos;
    uint16_t total_len;
    uint16_t id;
    uint16_t flags_off;
    uint8_t  ttl;
    uint8_t  proto;
    uint16_t checksum;
    uint8_t  src[4];
    uint8_t  dst[4];
};

static uint16_t ones_sum(const uint8_t *data, size_t len) {
    uint32_t sum = 0;
    for (size_t i = 0; i + 1 < len; i += 2) {
        uint16_t word = ((uint16_t)data[i] << 8) | data[i + 1];
        sum += word;
    }
    while (sum >> 16) sum = (sum & 0xFFFF) + (sum >> 16);
    return (uint16_t)sum;
}

static uint16_t header_checksum(const uint8_t *hdr, size_t len) {
    return ~ones_sum(hdr, len);
}

int main(void) {
    uint8_t pkt[20] = {
        0x45, 0x00, 0x00, 0x14,
        0x12, 0x34, 0x00, 0x00,
        0x40, 0x06, 0x00, 0x00,
        192, 168,   1,   1,
         10,   0,   0,   1
    };
    uint16_t cs = header_checksum(pkt, 20);
    pkt[10] = (uint8_t)(cs >> 8);
    pkt[11] = (uint8_t)(cs & 0xFF);
    printf("computed checksum=0x%04X\n", cs);
    printf("version=%d ihl=%d bytes ttl=%d proto=%d\n",
           pkt[0] >> 4, (pkt[0] & 0x0F) * 4, pkt[8], pkt[9]);
    printf("src=%d.%d.%d.%d dst=%d.%d.%d.%d\n",
           pkt[12], pkt[13], pkt[14], pkt[15],
           pkt[16], pkt[17], pkt[18], pkt[19]);
    uint16_t verify = ones_sum(pkt, 20);
    printf("verify checksum=0x%04X (0x0000 = valid)\n", verify);
    return 0;
}
