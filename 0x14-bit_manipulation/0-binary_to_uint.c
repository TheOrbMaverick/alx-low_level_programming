#include "main.h"
#include <stddef.h>

unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;
    int i = 0;
    char c;

    if (b == NULL)
    {
        return (0);
    }

    while (b[i] != '\0')
    {
        c = b[i];

        if (c != '0' && c != '1')
        {
            return (0); /** Invalid character */
        }

        result = (result << 1) | (c - '0');
        i++;
    }

    return (result);
}
