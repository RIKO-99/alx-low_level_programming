#include "main.h"
#include <string.h>

/**
 * _strchr - function locates a character in a string
 * @s: string to be scanned
 * @c: character to locate
 *
 * Return: a pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
