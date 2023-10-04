#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c) {
    if (size == 0) {
        return (NULL);
    }

    char *array = (char *)malloc(size * sizeof(char));
    if (array == NULL) {
        return (NULL); // Memory allocation failed
    }

    for (unsigned int i = 0; i < size; i++) {
        array[i] = c;
    }

    return (array);
}

int main() {
    unsigned int size = 10;
    char character = 'A';

    char *result = create_array(size, character);

    if (result != NULL) {
        for (unsigned int i = 0; i < size; i++) {
            printf("%c ", result[i]);
        }
        free(result); // Don't forget to free the memory when done
    } else {
        printf("Memory allocation failed.\n");
    }

    return (0);
}
