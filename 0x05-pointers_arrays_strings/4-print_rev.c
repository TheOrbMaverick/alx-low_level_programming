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
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to a null-terminated string.
 */
void print_rev(char *s)
{
	int len = _strlen(s);

	while (len > 0)
	{
		len--;
		write(1, &s[len], 1);
	}

	write(1, "\n", 1);
}
