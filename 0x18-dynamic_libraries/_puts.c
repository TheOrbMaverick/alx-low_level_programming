#include <unistd.h>
#include "main.h"

/**
 * _puts - Prints a string followed by a new line to the standard output.
 * @s: The string to be printed.
 */
void _puts(char *s)
{
    while (*s != '\0')
    {
        write(1, s, 1);
        s++;
    }

    write(1, "\n", 1);
}
