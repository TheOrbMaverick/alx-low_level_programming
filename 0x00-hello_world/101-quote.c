#include <unistd.h>
#define PHRASE "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"

/**
 * main - Entry point
 *
 * Description: Prints a specific message to the standard error.
 *
 * Return: Always 1 (indicating an error)
 */

int main(void)
{
	write(1, PHRASE, 59);
	return (1);
}
