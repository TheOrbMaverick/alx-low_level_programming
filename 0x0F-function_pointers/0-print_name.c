#include <stdio.h>

/**
 * print_name - Prints a name using a function specified by a function pointer.
 * @name: The name to be printed.
 * @f: A function pointer that defines how to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	/* Check if name and function pointer are valid */
	if (name != NULL && f != NULL) {
		f(name); /* Call the function specified by the function pointer to print the name */
	}
}
