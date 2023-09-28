/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return: The natural square root of n, or -1 if n does not have a
 *         natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1; /* Error: negative number */

	return find_sqrt(n, 0);
}

/**
 * find_sqrt - Helper function to find the square root recursively.
 * @n: The number for which to find the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of n, or -1 if not found.
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return guess; /* Found the square root */

	if (guess * guess > n)
		return -1; /* Error: no natural square root */

	return find_sqrt(n, guess + 1); /* Try the next guess */
}
