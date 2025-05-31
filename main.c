#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "auth.h"
#include "buffer.h"
#include "logger.h"
#include "config.h"
#include "crypto.h"
#include "math.h"
#include "net.h"
#include "util.h"

int validate_input(const char *input) {
    int len = strlen(input);
    if (len == 0 || len > 90) {
        log_warn("Input length is invalid");
        return 0;
    }

    for (int i = 0; i < len; i++) {
        if (!isprint(input[i]) && input[i] != '\n') {
            log_warn("Input contains non-printable characters");
            return 0;
        }
    }

    return 1;
}

int main() {
    char input[100];
    char encrypted[100];
    char decrypted[100];
    char buffer[50];

    print_auth_banner();
    log_info("Program started");

    load_config("config.txt");

    printf("Enter password: ");
    fgets(input, sizeof(input), stdin);

    if (!validate_input(input)) {
        log_error("Invalid input detected. Exiting.");
        return 1;
    }

    encrypt(input, encrypted, strlen(input));
    decrypt(encrypted, decrypted, strlen(input));

    copy2(buffer, decrypted);
    print_buffer(buffer);
    login_attempt(buffer);

    start_connection("127.0.0.1");

    log_info("Program ended");
    logout();

    return 0;
}