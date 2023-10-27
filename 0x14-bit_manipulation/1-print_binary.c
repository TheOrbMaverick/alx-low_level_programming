#include "main.h"

int _putchar(char c); /* Declaration of _putchar */

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int printing = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			printing = 1;
		}
		else if (printing)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
