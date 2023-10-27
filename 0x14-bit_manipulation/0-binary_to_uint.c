#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is an invalid character or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
	{
		return (0);
	}

	unsigned int result = 0;
	int i = 0;
	char c;

	while (b[i] != '\0')
	{
		c = b[i];

		if (c != '0' && c != '1')
		{
			return (0); /* Invalid character */
		}

		result = (result << 1) | (c - '0');
		i++;
	}

	return (result);
}
