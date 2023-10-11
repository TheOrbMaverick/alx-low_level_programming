#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog and stores a copy of name and owner.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 * Return: A pointer to the new dog, or NULL if allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog = malloc(sizeof(dog_t));

    if (new_dog == NULL)
        return NULL;

    new_dog->name = malloc(strlen(name) + 1);
    new_dog->owner = malloc(strlen(owner) + 1);

    strcpy(new_dog->name, name);
    strcpy(new_dog->owner, owner);

    new_dog->age = age;
    return new_dog;
}
