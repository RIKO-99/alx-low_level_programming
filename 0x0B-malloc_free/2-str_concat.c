#include "main.h"

/**
 * str_concat - function concantenates two strings
 * @s1: dest string
 * @s2: source string
 *
 * Return: concatenation os strin s1 & s2
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;

	ptr = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	strcat(ptr, s1);
	strcat(ptr, s2);

	return (ptr);
	free(ptr);
}
