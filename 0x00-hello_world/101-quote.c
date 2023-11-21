#include <unistd.h>
#define PHRASE "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"

/*
* int main - prints the phrase.
* return - it returns 1
*/

int main(void)
{
	write(1, PHRASE, 59);
	return (1);
}
