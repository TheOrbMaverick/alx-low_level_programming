#include <stdio.h>

/**
* _puts_recursion - Prints a string followed by a new line.
* @s: The string to print.
*
* Description: This function prints the characters of a string one by one
* 		using recursion until it reaches the null terminator.
*		It then prints a newline character.
*/

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
