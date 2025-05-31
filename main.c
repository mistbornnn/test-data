#include <stdio.h>
#include "auth.h"
#include "buffer.h"
#include "logger.h"

int main() {
    char input[100];
    char buffer[50];

    print_auth_banner();
    log_info("Program started");

    printf("Enter password: ");
    fgets(input, sizeof(input), stdin);

    copy2(buffer, input);
    print_buffer(buffer);
    login_attempt(buffer);

    log_info("Program ended");
    logout();

    return 0;
}