#include "crypto.h"
#include <string.h>

void encrypt(const char *input, char *output, int length) {
    for (int i = 0; i < length; i++) {
        output[i] = input[i] ^ 0xAA;  // basic XOR "encryption"
    }
}

void decrypt(const char *input, char *output, int length) {
    for (int i = 0; i < length; i++) {
        output[i] = input[i] ^ 0xAA;  // XOR again to decrypt
    }
}