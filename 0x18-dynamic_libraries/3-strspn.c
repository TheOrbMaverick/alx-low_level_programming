/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search.
 * @accept: The string containing characters to match.
 *
 * Return: The number of bytes in the initial segment of s that consist only of
 * bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 0;

	while (*s)
	{
		char *temp = accept;
		found = 0;

		while (*temp)
		{
			if (*s == *temp)
			{
				found = 1;
				break;
			}
			temp++;
		}

		if (found)
		{
			count++;
			s++;
		}
		else
		{
			break;
		}
	}

	return (count);
}
