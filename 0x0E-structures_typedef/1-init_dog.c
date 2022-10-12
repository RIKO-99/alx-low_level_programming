#include "dog.h"

/**
 * init_dog - function initialize var of
 * type struct dog
 * @name: name template
 * @age: floating point number
 * @owner: string of type char
 * @d: pointer
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
