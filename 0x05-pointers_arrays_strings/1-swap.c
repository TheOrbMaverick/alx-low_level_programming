/**
 * swap_int - Swaps the values of two integers
 * Description: This function takes two integer pointers and swaps them 
*/
void swap_int(int *a, int *b)
{
	int temp; /* Declare a temporary variable to hold the value */

	temp = *a; /* Store the value pointed to by a in temp */
	*a = *b; /* Update the value pointed to by a with the value pointed to by b */
	*b = temp; /* Update the value pointed to by b with the value in temp */
}
