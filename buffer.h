#ifndef BUFFER_H
#define BUFFER_H

void copy2(char *dst, const char *src);
void safe_copy(char *dst, const char *src, int size);
void print_buffer(const char *buf);
int buffer_length(const char *buf);
void clear_buffer(char *buf, int size);

#endif