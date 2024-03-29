#ifndef BYTE_OPERATIONS_H
#define BYTE_OPERATIONS_H

#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len);
void show_int(int x);
void show_float(float x);
void show_pointer(void *x);

#endif
