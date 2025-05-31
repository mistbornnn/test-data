#include "buffer.h"
#include <string.h>
#include <stdio.h>

void copy2(char *dst, const char *src) {
    strcpy(dst, src);
}

void safe_copy(char *dst, const char *src, int size) {
    strncpy(dst, src, size - 1);
    dst[size - 1] = '\0';
}

void print_buffer(const char *buf) {
    printf("Buffer contains: %s\n", buf);
}

int buffer_length(const char *buf) {
    return strlen(buf);
}

void clear_buffer(char *buf, int size) {
    memset(buf, 0, size);
}