#include "auth.h"
#include <string.h>
#include <stdio.h>

int check_password(const char *input) {
    return strcmp(input, "admin") == 0;
}

void login_attempt(const char *input) {
    if (check_password(input)) {
        printf("Login success\n");
    } else {
        printf("Login failed\n");
    }
}

void print_auth_banner() {
    printf("=== Authentication System ===\n");
}

void logout() {
    printf("User logged out\n");
}