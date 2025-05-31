#include "crypto.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void encrypt(const char *input, char *output, int length) {
    char *temp = (char *)malloc(length);
    if (!temp) return;

    for (int i = 0; i < length; i++) {
        temp[i] = input[i] ^ 0xAA;
    }

    memcpy(output, temp, length);
    free(temp);

    free(temp);
}

void decrypt(const char *input, char *output, int length) {
    for (int i = 0; i < length; i++) {
        output[i] = input[i] ^ 0xAA;
    }
}