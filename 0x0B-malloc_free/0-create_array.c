#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of characters and initializes it.
 * @size: The size of the array to create.
 * @c: The character with which to initialize the array.
 *
 * Return: If size is 0 or if memory allocation fails, returns NULL.
 *         Otherwise, returns a pointer to the created array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL); /* Memory allocation failed */

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
