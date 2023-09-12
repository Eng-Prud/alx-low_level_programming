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
	new_ptr = malloc(sizeof(dog_t));

	if (new_ptr == NULL)
		return (NULL);

	name_ptr = malloc(sizeof(char) * (strlen(name) + 1));
	owner_ptr = malloc(sizeof(char) * (strlen(owner) + 1));
	if (name_ptr == NULL || owner_ptr == NULL)
	{
		free(new_ptr);
		free(name_ptr);
		free(owner_ptr);
		return (NULL);
	}

	strcpy(name_ptr, name);
	strcpy(owner_ptr, owner);

	new_ptr->name = name_ptr;
	new_ptr->age = age;
	new_ptr->owner = owner_ptr;

	return (new_ptr);
}
