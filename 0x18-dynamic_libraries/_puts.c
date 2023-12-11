#include "main.h"
#include <unistd.h>

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: Pointer to a null-terminated string.
 */
void _puts(char *str)
{
        while (*str)
        {
                write(1, str, 1);
                str++;
        }
        write(1, "\n", 1);
}
