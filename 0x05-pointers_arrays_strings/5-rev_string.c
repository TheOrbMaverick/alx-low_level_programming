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
 * rev_string - Reverses a string.
 * @s: Pointer to a null-terminated string.
 */
void rev_string(char *s)
{
	int len = _strlen(s);
	int i;
	char temp;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
