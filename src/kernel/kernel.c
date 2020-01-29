//
//  kernel.c
//  pi-os
//
//  Created by Harry O'Brien on 07/01/2020.
//  Copyright © 2020 Harry O'Brien. All rights reserved.
//

#include <stddef.h>
#include <stdint.h>
#include <kernel/uart.h>
#include <common/stdio.h>
#include <common/stdlib.h>

void kernel_main(uint32_t r0, uint32_t r1, uint32_t atags)
{
    char buf[256];
    // Declare as unused
    (void) r0;
    (void) r1;
    (void) atags;

    uart_init();
    puts("Hello, kernel World!\n");
    while (1) {
        gets(buf,256);
        puts(buf);
        putc('\n');
    }
}
