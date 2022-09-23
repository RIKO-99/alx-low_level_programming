#include "main.h"
#include <string.h>

/**
 * _strncpy - function copies a string
 * @dest: destination
 * @src: source
 * @n: integer value number of bytes to be used
 *
 * Return: destination of the string copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int bytecount;

	for (byteCount = 0; byteCount < n && src[byteCount] != '\0'; byteCount++)
		dest[byteCount] = src[byteCount];
	for (; byteCount < n; byteCount++)
		dest[byteCount] = '\0';

	return (dest);
}
