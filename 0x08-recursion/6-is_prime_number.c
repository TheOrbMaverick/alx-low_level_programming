/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The integer to check.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0); // 0 and 1 are not prime numbers
	}

	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0); // n is divisible by i, so it's not prime
		}
	}

	return (1); // n is prime
}
