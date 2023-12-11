/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converted.
 *
 * Return: The converted integer, or 0 if no valid integer is found.
 */
int _atoi(char *s)
{
	int sign = 1; /* Initialize the sign to positive */
	int result = 0; /* Initialize the result */

	while (*s)
	{
		/* Handle leading spaces or other non-digit characters */
		if (*s == ' ' || (*s >= 9 && *s <= 13)) /* ASCII values for whitespace characters */
		{
			s++;
			continue;
		}

		/* Handle sign characters */
		if (*s == '-' || *s == '+')
		{
			if (*s == '-')
				sign *= -1; /* Toggle sign for negative number */
			s++;
		}

		/* Check for valid digit characters */
		if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0'); /* Convert character to integer */
			s++;
		}
		else
		{
			break; /* Break loop if non-digit character is encountered */
		}
	}

	return (result * sign);
}
