#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

int _strlen(const char *s);
char *_strcpy(char *dest, const char *src);
int _putchar(char c);
void _puts(char *str);
int _strncmp(const char *s1, const char *s2, size_t n);
char **stringToTokens(char *str);
int execute(char **cmd);
char *_strcat(char *dest, char *src);

#endif
