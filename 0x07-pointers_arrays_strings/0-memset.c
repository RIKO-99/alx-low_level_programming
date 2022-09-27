#include "main.h"
#include <string.h>

/**
 * _memset - prototype fills memory with constant byte
 * @s: pointer to the block of memory
 * @b: value to be set
 * @n: number of bytes to be set to the value
 *
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
