#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2-dimensional array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: On success, a pointer to the allocated grid.
 *         On failure or if width or height is 0 or negative, returns NULL.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for the rows */
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL); /* Memory allocation failed */

	/* Allocate memory for the columns and initialize elements to 0 */
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* Free previously allocated memory on failure */
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL); /* Memory allocation failed */
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0; /* Initialize to 0 */
	}

	return (grid);
}
