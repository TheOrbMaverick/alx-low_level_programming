#include <unistd.h>

/**
 * _puts recursion - Prints a string followed by a new line
 * @s the string to be printed
*/

int _putchar(char c)
{
    return write(1, &c, 1);
}


void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
