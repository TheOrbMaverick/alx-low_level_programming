#include <stdio.h>

int main(int argc, char *argv[])
{
	/* Check if argc is greater than or equal to 1 */
	if (argc >= 1)
	{
		/* Print the number of arguments passed, excluding the program name */
		printf("%d\n", argc - 1);
		printf("%d\n", *argv[0]);
		return (0);
	}
	else
	{
		return (1);
	}
}
