# test-data
This repository contains a mock C project designed to test mistborn.

## Overview

The project simulates a basic application with authentication, logging, encryption, and utility logic. It also includes intentionally added security bugs.

## Components

- `main.c`: Central logic
- `auth.c`: User authentication (contains hardcoded password)
- `buffer.c`: String handling (contains buffer overflow)
- `logger.c`: Logging system (contains format string bug)
- `crypto.c`: Simple XOR encryption (contains double free)
- `net.c`: Simulated network connection (contains use-after-free)
- `math.c`: Arithmetic helpers (contains integer overflow)
- `config.c`: Reads config from file
- `util.c`: Miscellaneous helpers
- `README.md`: Project documentation

## Building & Running
```bash
gcc -o app /*.c
./app
