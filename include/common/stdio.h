//
//  stdio.h
//  pi-os
//
//  Created by Harry O'Brien on 08/01/2020.
//  Copyright © 2020 Harry O'Brien. All rights reserved.
//

#ifndef STDIO_H
#define STDIO_H

char getc(void);
void putc(char c);

void puts(const char * s);

// This version of gets copies until newline, replacing newline with null char, or until buflen.
// whichever comes first
void gets(char * buf, int buflen);

#endif
