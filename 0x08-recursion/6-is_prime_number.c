/**
 * is_prime_recursive - Checks if an integer is a prime number.
 * @n: The integer to check.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
	if (n < 2 || n % divisor == 0)
		return (0);

	if (divisor * divisor > n)
		return (1);

	return (is_prime_recursive(n, divisor + 1));
}

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The integer to check.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n == 2)
		return (1);

	return (is_prime_recursive(n, 2));
}
