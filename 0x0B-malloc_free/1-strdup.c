#include "main.h"

/**
 * _strdup - prototype returns a pointer to
 * newly allocated memmory
 * @str: source string
 *
 * Return: pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *dst = malloc(strlen(str) + 1);

	if (dst == NULL && str == NULL)
		return (NULL);

	if (!str)
	{
		return (NULL);
	}

	strcpy(dst, str);
	return (dst);
	free(dst);
}
