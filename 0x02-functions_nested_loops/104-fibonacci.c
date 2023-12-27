#include <stdio.h>

int main(void)
{
    unsigned long int first = 1, second = 2, next, count;

    printf("%lu, %lu", first, second);

    for (count = 2; count < 98; count++)
    {
        next = first + second;
        first = second;
        second = next;

        printf(", %lu", next);
    }

    printf("\n");

    return 0;
}
