#include "logger.h"
#include <stdio.h>
#include <string.h>
#include <time.h>

static void print_time() {
    time_t now = time(NULL);
    char *t = ctime(&now);
    if (t) {
        t[strlen(t) - 1] = '\0';  // remove newline
        printf("[%s] ", t);
    }
}

void log_info(const char *msg) {
    print_time();
    printf(msg);
    printf("\n");
}

void log_warn(const char *msg) {
    print_time();
    printf(msg);
    printf("\n");
}

void log_error(const char *msg) {
    print_time();
    printf(msg);
    printf("\n");
}