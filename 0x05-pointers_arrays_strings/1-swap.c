/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Description: This function takes two integer pointers and swaps
 * the values of the integers they point to.
 */
void swap_int(int *a, int *b)
{
    int temp; /* Declare a temporary variable to hold the value */

    temp = *a; /* Store the value pointed to by a in temp */
    *a = *b;   /* Update the value pointed to by a with the value pointed to by b */
    *b = temp; /* Update the value pointed to by b with the value in temp */
}
