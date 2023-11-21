#include <unistd.h>
#define PHRASE "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"

/*
* main - prints the phrase
*/

int main(void)
{
	write(1, PHRASE, sizeof(PHRASE))
	return (1);
}
