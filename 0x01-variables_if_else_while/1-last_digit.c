#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Assigns a random number to n and prints its last digit.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	printf("Last digit of %d is %d and is ", n, lastDigit);

	if (lastDigit > 5)
		printf("greater than 5");
	else if (lastDigit == 0)
		printf("0");
	else
		printf("less than 6 and not 0");

	printf("\n");

	return (0);
}
