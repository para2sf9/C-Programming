#include <stdio.h>
#include <stdint.h>
#include <stddef.h>

/* Simulated hardware register block */
#define REG_CTRL 0x00
#define REG_STAT 0x04
#define REG_DATA 0x08

#define CTRL_ENABLE  (1u << 0)
#define CTRL_IRQ_EN  (1u << 1)
#define CTRL_MODE    (1u << 2)
#define STAT_BUSY    (1u << 0)
#define STAT_ERROR   (1u << 1)

static volatile uint32_t hw_regs[3];

static void reg_write(size_t off, uint32_t v) {
    hw_regs[off / sizeof(uint32_t)] = v;
}

static uint32_t reg_read(size_t off) {
    return hw_regs[off / sizeof(uint32_t)];
}

static void device_init(void) {
    reg_write(REG_CTRL, CTRL_ENABLE | CTRL_IRQ_EN);
    reg_write(REG_STAT, 0);
}

static int device_ready(void) {
    return (reg_read(REG_STAT) & STAT_BUSY) == 0;
}

int main(void) {
    device_init();
    uint32_t ctrl = reg_read(REG_CTRL);
    printf("ctrl=0x%08X enable=%d irq=%d mode=%d\n",
           ctrl, !!(ctrl & CTRL_ENABLE), !!(ctrl & CTRL_IRQ_EN), !!(ctrl & CTRL_MODE));
    reg_write(REG_STAT, STAT_BUSY);
    printf("ready=%d\n", device_ready());
    reg_write(REG_STAT, 0);
    printf("ready=%d\n", device_ready());
    reg_write(REG_CTRL, ctrl & ~CTRL_ENABLE);
    printf("after disable=0x%08X\n", reg_read(REG_CTRL));
    return 0;
}
