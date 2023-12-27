#include <stdio.h>

int main(void)
{
    int first = 1, second = 2, next, sum = 0;

    while (second <= 4000000)
    {
        if (second % 2 == 0)
        {
            sum += second;
        }

        next = first + second;
        first = second;
        second = next;
    }

    printf("Sum of even-valued terms in Fibonacci sequence: %d\n", sum);

    return 0;
}
