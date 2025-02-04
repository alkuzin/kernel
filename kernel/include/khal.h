#ifndef __K_HAL
#define __K_HAL

#include "kasm.h"
#include <stdint.h>

#if defined(__x86_64__)

extern uint64_t paging_main[3][512] __attribute__((aligned(4096)));

void serial_write_byte(uint8_t byte);
int serial_init();
void __attribute__((format(printf, 1, 2)))
serial_printf(const char *restrict fmt, ...);

#else
#error "Only AMD64 is supported"
#endif

#endif