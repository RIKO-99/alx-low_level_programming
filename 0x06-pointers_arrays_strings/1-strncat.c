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

	length = 0
		while (dest[length] != '\0')
		{
			length++;
		}
	for (j = 0; j < n && src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
