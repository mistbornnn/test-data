#include "net.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char *connection_buffer = NULL;

void start_connection(const char *host) {
    connection_buffer = (char *)malloc(128);
    if (!connection_buffer) {
        printf("Failed to allocate connection buffer\\n");
        return;
    }

    strcpy(connection_buffer, host);
    printf("Connecting to: %s\\n", connection_buffer);

    free(connection_buffer);
    printf("Buffer freed\\n");

    printf("Connection to %s started\\n", connection_buffer);
}

void stop_connection() {
    if (connection_buffer) {
        printf("Stopping connection\\n");
        free(connection_buffer);
        connection_buffer = NULL;
    }
}