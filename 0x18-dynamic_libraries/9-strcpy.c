#include "main.h"

/**
 * _strcpy - copy string pointed by src
 * @dest: char pointer destination
 * @src: char pointer (size of Array)
 *
 * Return: Always returns (dest)
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int str_len;

	i = 0;
	str_len = 0;

	while (*(src + str_len) != '\0')
		str_len++;

	while (i < str_len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
