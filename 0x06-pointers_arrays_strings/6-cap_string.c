/**
 * cap_string - Capitalizes all words of a string.
 * @str: Pointer to the string to be capitalized.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1; /* Flag to indicate the next character should be capitalized */

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		    str[i] == '}')
		{
			capitalize_next = 1; /* Set flag to capitalize next character */
		}
		else if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32; /* Capitalize the current character */
			capitalize_next = 0; /* Reset flag */
		}
		else
		{
			capitalize_next = 0; /* Reset flag */
		}
		i++;
	}

	return (str);
}
