/**
 * infinite_add - Adds two numbers.
 * @n1: Pointer to the first number as a string.
 * @n2: Pointer to the second number as a string.
 * @r: Buffer to store the result.
 * @size_r: Size of the buffer.
 *
 * Return: Pointer to the result or 0 if the result can't be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, carry, sum;
	int i = 0, j = 0;

	while (n1[i] != '\0')
		i++;
	len1 = i - 1;

	while (n2[j] != '\0')
		j++;
	len2 = j - 1;

	if (len1 > size_r - 2 || len2 > size_r - 2)
		return (0);

	carry = 0;
	r[size_r - 1] = '\0';
	i = len1;
	j = len2;
	size_r--;

	while (i >= 0 || j >= 0 || carry > 0)
	{
		int digit1 = (i >= 0) ? n1[i] - '0' : 0;
		int digit2 = (j >= 0) ? n2[j] - '0' : 0;

		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		r[size_r - 1] = (sum % 10) + '0';

		i--;
		j--;
		size_r--;
	}

	return (r + size_r);
}
