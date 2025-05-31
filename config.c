#include "config.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char config_value[100] = "default";

void load_config(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Could not open config file: %s\\n", filename);
        return;
    }

    if (fgets(config_value, sizeof(config_value), file)) {
        size_t len = strlen(config_value);
        if (len > 0 && config_value[len - 1] == '\\n') {
            config_value[len - 1] = '\\0';  // remove newline
        }
    }

    fclose(file);
    printf("Config loaded: %s\\n", config_value);
}

const char* get_config_value() {
    return config_value;
}