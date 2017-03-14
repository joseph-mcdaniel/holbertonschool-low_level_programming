#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - let's free some dogs
 * @d: points to dog that need to be freed
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
