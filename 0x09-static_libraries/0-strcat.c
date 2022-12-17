#include "main.h"

/**
 * _strcat - concatenates strings
 *
 * @dest: destination
 * @src: source
 *
 * Return: pointer to destination
 *
 */
char *_strcat(char *dest, char *src)
{
	int length = 0, j;


	while (dest[length] != '\0')
	{
		length++;
	}

	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
