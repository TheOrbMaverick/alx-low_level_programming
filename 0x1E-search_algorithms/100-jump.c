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
    while (array[(step < size ? step : size) - 1] < value)
    {
        prev = step;
        step += sqrt(step);

        if (prev >= size)
            return (-1);
        printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
    }
    printf("Value found between indexes [%d] and [%d]\n", prev, step);

    for (i = prev; i < (step < size ? step : size); i++)
    {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);

        if (array[i] == value)
            return (i);
    }
}