#include <stddef.h>
#include "dog.h"
#ifndef DOG_H
#define DOG_H

/**
 * init_dog - function
 * @d: pointer to the struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
#endif
