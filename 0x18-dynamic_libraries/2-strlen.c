#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer paramater
 *
 * Return: void
 *
 */
int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count);
}
