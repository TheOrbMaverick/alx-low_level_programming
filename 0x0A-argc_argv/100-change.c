#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    /* Check if the number of arguments is not exactly 2 (including program name) */
    if (argc != 2)
    {
        /* Print an error message and return 1 */
        printf("Error\n");
        return (1);
    }

    /* Convert the argument (amount in cents) to an integer */
    int cents = atoi(argv[1]);

    /* Check if the input is negative */
    if (cents < 0)
    {
        /* Print 0 and return 0 (no coins needed for negative input) */
        printf("0\n");
        return (0);
    }

    /* Initialize variables to keep track of the number of coins */
    int numQuarters = 0, numDimes = 0, numNickels = 0, numPennies = 0;

    /* Calculate the number of each coin denomination */
    while (cents > 0)
    {
        if (cents >= 25)
        {
            cents -= 25;
            numQuarters++;
        }
        else if (cents >= 10)
        {
            cents -= 10;
            numDimes++;
        }
        else if (cents >= 5)
        {
            cents -= 5;
            numNickels++;
        }
        else
        {
            cents -= 1;
            numPennies++;
        }
    }

    /* Calculate the total number of coins */
    int totalCoins = numQuarters + numDimes + numNickels + numPennies;

    /* Print the total number of coins needed */
    printf("%d\n", totalCoins);

    return (0);
}
