#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int sum = 0; // Initialize the sum

    /* Check if no numbers are passed to the program */
    if (argc == 1)
    {
        printf("0\n");
        return (0);
    }

    /* Loop through the command-line arguments to add positive numbers */
    for (int i = 1; i < argc; i++)
    {
        char *arg = argv[i];
        int j = 0;

        /* Check if the argument contains non-digit characters */
        while (arg[j] != '\0')
        {
            if (!(arg[j] >= '0' && arg[j] <= '9'))
            {
                printf("Error\n");
                return (1);
            }
            j++;
        }

        /* Convert the argument to an integer and add it to the sum */
        int num = atoi(arg);
        if (num > 0)
        {
            sum += num;
        }
    }

    /* Print the sum followed by a new line */
    printf("%d\n", sum);

    return (0);
}
