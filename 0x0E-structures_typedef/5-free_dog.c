#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory associated with a dog structure.
 * @d: Pointer to the dog structure to be freed.
 */
void free_dog(dog_t *d)
{
    if (d != NULL) {
        /* Free the dynamically allocated memory for the name and owner strings */
        free(d->name);
        free(d->owner);
        /* Free the dynamically allocated memory for the dog structure */
        free(d);
    }
}
