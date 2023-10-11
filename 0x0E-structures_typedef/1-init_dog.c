#include <stdio.h>
#include "dog.h"

/*
 * init_dog is the function
 * *d is the address of the struct dog
 * name is the name of the dog
 * age is the age of the dog
 * owner is the owner of the dog
 * */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
        if (d != NULL)
        {
                d->name = name;
                d->age = age;
                d->owner = owner;
        }
}


