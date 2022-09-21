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
	int i = 0, j = 0;

	dest = string1;
	src = string2;

	while (string1[i] != '\0')
	{
		++dest;
		i++;
	}

	while (string2[j] != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		j++;
	}
	return (dest);
}
