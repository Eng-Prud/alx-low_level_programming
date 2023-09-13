#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - new dog
 * @name: it's name
 * @age: age of dog
 * @owner: owner of dog
 * Return: ptr to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_ptr;

	new_ptr = malloc(sizeof(dog_t));

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	new_ptr->name = strdup(name);
	if (new_ptr->name == NULL)
	{
		free(new_ptr);
		return (NULL);
	}

	new_ptr->owner = strdup(owner);

	if (new_ptr->owner == NULL)
	{
		free(new_ptr->name);
		free(new_ptr->owner);
		free(new_ptr);
		return (NULL);
	}

	new_ptr->age = age;

	return (new_ptr);
}
