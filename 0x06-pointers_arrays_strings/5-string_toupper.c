/**
 * string_toupper - Converts all lowercase letters in a string to uppercase.
 * @str: Pointer to the string to be converted.
 *
 * Return: Pointer to the modified string.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32; /* Convert lowercase letter to uppercase */
		}
		i++;
	}

	return (str);
}
