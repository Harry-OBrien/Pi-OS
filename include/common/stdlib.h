//
//  stdlib.h
//  pi-os
//
//  Created by Harry O'Brien on 08/01/2020.
//  Copyright © 2020 Harry O'Brien. All rights reserved.
//

#ifndef STDLIB_H
#define STDLIB_H

void memcpy(void * dest, void * src, int bytes);

void bzero(void * dest, int bytes);

char * itoa(int i);

#endif
