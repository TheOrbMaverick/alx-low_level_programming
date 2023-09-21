/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to the string to be encoded.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
	char *s = str;
	char leet_map[] = "aAeEoOtTlL44337711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; "aAeEoOtTlL"[j] != '\0'; j++)
		{
			if (s[i] == "aAeEoOtTlL"[j])
			{
				s[i] = leet_map[j];
				break;
			}
		}
	}

	return (str);
}
