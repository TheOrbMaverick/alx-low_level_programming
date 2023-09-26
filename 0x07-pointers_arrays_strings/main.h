#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>

int _putchar(char c);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
void print_chessboard(char (*a)[8]);

#endif /* MAIN_H */
