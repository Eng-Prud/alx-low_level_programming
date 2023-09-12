#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Free memory
 * @d: struct dog to be freed
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
