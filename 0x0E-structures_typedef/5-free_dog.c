#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function frees dogs
 * @d: pointer
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
