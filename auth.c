#include "auth.h"
#include "logger.h"
#include <string.h>
#include <stdio.h>

int check_password(const char *input) {
    return strcmp(input, "admin") == 0;
}

void login_attempt(const char *input) {
    if (check_password(input)) {
        log_info("Login success");
        printf("Login success\\n");
    } else {
        log_warn("Login failed");
        printf("Login failed\\n");
    }
}

void print_auth_banner() {
    printf("=== Authentication System ===\\n");
}

void logout() {
    log_info("User logged out");
    printf("User logged out\\n");
}