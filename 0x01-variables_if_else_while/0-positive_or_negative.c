#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Assigns a random number to n and prints its sign.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf(n " is positive");
	else if (n == 0)
		printf(n " is zero");
	else
		printf(n " is negative");

	printf("\n");

	return (0);
}
