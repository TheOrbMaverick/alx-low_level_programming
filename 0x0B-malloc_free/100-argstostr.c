#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The number of arguments.
 * @av: An array of pointers to the arguments.
 *
 * Return: On success, a pointer to the concatenated string.
 *         On failure or if ac is 0 or av is NULL, returns NULL.
 */
char *argstostr(int ac, char **av)
{
	int i, j, total_length = 0, current_length = 0;
	char *concatenated;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		current_length = 0;
		while (av[i][current_length] != '\0')
			current_length++;
		total_length += current_length + 1; /* Add 1 for '\n' */
	}

	/* Allocate memory for the concatenated string */
	concatenated = (char *)malloc(total_length * sizeof(char));

	if (concatenated == NULL)
		return (NULL); /* Memory allocation failed */

	/* Concatenate the arguments with '\n' */
	current_length = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated[current_length] = av[i][j];
			current_length++;
		}
		concatenated[current_length] = '\n';
		current_length++;
	}
	concatenated[current_length] = '\0'; /* Null-terminate the string */

	return (concatenated);
}
