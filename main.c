#include <stdio.h>
#include "auth.h"
#include "buffer.h"
#include "logger.h"
#include "config.h"
#include "math.h"


int math_demo() {
    int a = INT_MAX;
    int b = 1;
    int result = add(a, b);
    printf("Result of add(INT_MAX, 1): %d\\n", result);
    return result;
}

int main() {
    char input[100];
    char buffer[50];

    print_auth_banner();
    log_info("Program started");

    load_config("config.txt");

    printf("Enter password: ");
    fgets(input, sizeof(input), stdin);

    copy2(buffer, input);
    print_buffer(buffer);
    login_attempt(buffer);

    log_info("Program ended");
    logout();

    math_demo()

    return 0;
}