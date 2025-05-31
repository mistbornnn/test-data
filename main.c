#include <stdio.h>
#include "auth.h"
#include "buffer.h"

int main() {
    char input[100];
    char buffer[100];

    print_auth_banner();
    printf("Enter password: ");
    fgets(input, sizeof(input), stdin);

    safe_copy(buffer, input, sizeof(buffer));
    print_buffer(buffer);
    login_attempt(buffer);

    logout();

    return 0;
}