#include <unistd.h>

/**
* Function to print putchar
*/

int _putchar(char c)
{
	return write(1, &c, 1);
}
