#include "main.h"

/**
 * factorial - Returns the factorial of a number.
 * @n: The number to calculate the factorial for.
 *
 * Return: The factorial of the number.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1); /* Error: Negative input */
	}
	else if (n == 0)
	{
		return (1); /* Base case: 0! = 1 */
	}
	else
	{
		return (n * factorial(n - 1)); /* Recursive case */
	}
}
