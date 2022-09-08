#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

void _purs(char *str);
int _strlen(const char *s);
char *_strcpy(char *dest, const char *src);
int _putchar(char c);
void _puts(char *str);
<<<<<<< HEAD
unsigned int nbr_spaces(char *s);
=======
int _strncmp(const char *s1, const char *s2, size_t n);
>>>>>>> c55f7880fc6bbb58ff171ccac2a561b9cc71a5f6
char **stringToTokens(char *str);

#endif
