#ifndef AUTH_H
#define AUTH_H

int check_password(const char *input);
void login_attempt(const char *input);
void print_auth_banner();
void logout();

#endif