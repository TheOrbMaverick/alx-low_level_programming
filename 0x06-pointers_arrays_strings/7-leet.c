/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to the string to be encoded.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
	char leet_map[256] = {0}; /* Initialize an array to map characters */

	/* Populate the character mapping */
	leet_map['a'] = '4';
	leet_map['A'] = '4';
	leet_map['e'] = '3';
	leet_map['E'] = '3';
	leet_map['o'] = '0';
	leet_map['O'] = '0';
	leet_map['t'] = '7';
	leet_map['T'] = '7';
	leet_map['l'] = '1';
	leet_map['L'] = '1';

	int i = 0;

	while (str[i] != '\0')
	{
		if (leet_map[(unsigned char)str[i]] != 0)
			str[i] = leet_map[(unsigned char)str[i]];
		i++;
	}

	return (str);
}
