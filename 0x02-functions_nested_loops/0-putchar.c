#include <unistd.h>
#include "main.h"

/**
* Function to print putchar
*/

int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
