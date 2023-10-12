#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of integers to sum
 * @...: the integers to sum
 *
 * Return: the sum of the integers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
