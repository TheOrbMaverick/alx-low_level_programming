#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Execute a function on each element of an array.
 * @array: The array to iterate over.
 * @size: The size of the array.
 * @action: A pointer to the function to be executed on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* Check if array and action function are not NULL */
	if (array != NULL && action != NULL) {
		size_t i;

		/* Iterate through the array and apply the action to each element */
		for (i = 0; i < size; i++) {
			action(array[i]);
		}
	}
}
