#include <unistd.h>

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to a null-terminated string.
 *
 * Return: The length of the string (number of characters).
 */
int _strlen(char *s)
{
    int length = 0;

    while (*s)
    {
        length++;
        s++;
    }

    return (length);
}

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: Pointer to a null-terminated string.
 */
void puts_half(char *str)
{
    int len = _strlen(str);
    int i, start;

    if (len % 2 == 0)
        start = len / 2;
    else
        start = (len - 1) / 2;

    for (i = start; i < len; i++)
    {
        write(1, &str[i], 1);
    }

    write(1, "\n", 1);
}
