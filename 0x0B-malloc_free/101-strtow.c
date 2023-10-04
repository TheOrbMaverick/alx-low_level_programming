#include <stdio.h>
#include <stdlib.h>

int is_space(char c) {
    return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * strtow - Splits a string into words.
 * @str: The input string to split.
 *
 * Return: On success, a pointer to an array of strings (words).
 *         The last element of the array is NULL.
 *         On failure or if str is NULL or empty, returns NULL.
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k, count = 0, word_length = 0;

    if (str == NULL || *str == '\0')
        return (NULL);

    /* Count the number of words in the string */
    for (i = 0; str[i] != '\0'; i++) {
        if (!is_space(str[i]) && (i == 0 || is_space(str[i - 1])))
            count++;
    }

    /* Allocate memory for the array of words */
    words = (char **)malloc((count + 1) * sizeof(char *));
    if (words == NULL)
        return (NULL);

    /* Split the string into words and store in the array */
    for (i = 0, k = 0; str[i] != '\0'; i++) {
        if (!is_space(str[i]) && (i == 0 || is_space(str[i - 1]))) {
            word_length = 1;
            for (j = i + 1; str[j] != '\0' && !is_space(str[j]); j++, word_length++)
                ;
            words[k] = (char *)malloc((word_length + 1) * sizeof(char));
            if (words[k] == NULL) {
                /* Free memory if allocation fails */
                for (k = k - 1; k >= 0; k--)
                    free(words[k]);
                free(words);
                return (NULL);
            }
            for (j = 0; j < word_length; j++, i++)
                words[k][j] = str[i];
            words[k][j] = '\0'; /* Null-terminate the word */
            k++;
        }
    }
    words[k] = NULL; /* Null-terminate the array of words */

    return (words);
}
