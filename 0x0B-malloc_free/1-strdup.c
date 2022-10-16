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
	unsigned int i;
	char *dst;

	for (i = 0; str[i] != '\0'; i++)

	dst = (char *)malloc(sizeof(char) * (i + 1));

	if (dst == NULL)
	{
		return (NULL);
	}

	if (str == NULL)
	{
		return (NULL);
	}

	strcpy(dst, str);
	return (dst);
	free(dst);
}
