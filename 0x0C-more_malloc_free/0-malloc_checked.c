#include "main.h"

/**
 * malloc_checked - function allocates memory (malloc)
 * @b: integer paramater
 *
 * Return: pointer to the alocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *str;

	str = malloc(b);

	if (str == NULL)
		exit(98);

	return (str);
}
