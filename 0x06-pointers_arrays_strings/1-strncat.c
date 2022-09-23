#include "main.h"

/**
 * _strncat - concantenates two strings
 * @dest: destination
 * @src: source
 * @n: integer value
 *
 * Return: destination to pointer
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, j;

	length = strlen(dest);
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[length + j] = src[j];
	}
	dest[length + j] = '\0';
	return (dest);
}
