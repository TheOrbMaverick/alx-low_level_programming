#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: On success, a pointer to the concatenated string.
 *         On failure or if s1 or s2 is NULL, returns NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of s1 and s2 */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* Allocate memory for the concatenated string */
	concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL); /* Memory allocation failed */

	/* Copy s1 into concatenated */
	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];

	/* Copy s2 into concatenated */
	for (j = 0; j < len2; j++, i++)
		concatenated[i] = s2[j];

	/* Null-terminate the concatenated string */
	concatenated[i] = '\0';

	return (concatenated);
}
