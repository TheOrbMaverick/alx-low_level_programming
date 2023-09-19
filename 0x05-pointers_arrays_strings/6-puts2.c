#include <unistd.h>

/**
 * puts2 - Prints every other character of a string.
 * @str: Pointer to a null-terminated string.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i += 2; /* Move to the next character (every other character) */
	}

	write(1, "\n", 1);
}
