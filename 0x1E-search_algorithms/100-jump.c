#include "search_algos.h"
#include <math.h>

int jump_search(int *array, size_t size, int value)
{
	int step, prev, i;

	if (array == NULL)
		return (-1);

	/* Calculate the jump step */
	step = sqrt(size);
	prev = 0;

	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	while (array[step - 1] < value)
	{
		prev = step;
		step += sqrt(size);

		if (prev >= size)
			return (-1);

		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, step);

	for (i = prev; i < step; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (i);
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	return (-1);
}
