#include <stdio.h>
#include <stdlib.h> /* for memory allocation */
#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Allocate memory for the name string */
	d->name = (char *)malloc(strlen(name) + 1); /* +1 for the null terminator */

	/* Check if memory allocation was successful */
	if (d->name != NULL)
	{
		strcpy(d->name, name);
		d->age = age;
		d->owner = owner; /* Assuming ownership is not duplicated */
	}
	else
	{
		/* Handle memory allocation failure */
		/* You might want to free any previously allocated memory here */
	}
}
