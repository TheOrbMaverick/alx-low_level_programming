#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    /* Check if argc is not equal to 3, indicating an error */
    if (argc != 3)
    {
        /* Print an error message and return 1 */
        printf("Error\n");
        return (1);
    }

    /* Convert the first argument to an integer */
    int num1 = atoi(argv[1]);
    /* Convert the second argument to an integer */
    int num2 = atoi(argv[2]);

    /* Calculate the result of multiplication */
    int result = num1 * num2;

    /* Print the result followed by a newline */
    printf("%d\n", result);

    return (0);
}
