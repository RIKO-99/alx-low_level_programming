#include "main.h"

/**
 * string_nconcat - function concatenates two strings
 * @s1: pointer to destination
 * @s2: pointer to source
 * @n: integer number of elements
 *
 * Return: pointer to newly selected
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1, len_s2, space, i;
	char *joint;

	len_s1 = s1 == NULL ? 0 : strlen(s1);
	len_s2 = s2 == NULL ? 0 : strlen(s2);
	if (n >= len_s2)
		n = len_s2;

	space = sizeof(char) * (len_s1 + n + 1);
	joint = malloc(space);
	if (!joint)
		return (NULL);

	for (i - 0; i < space; i++)
	{
		if (i < len_s1)
			*(joint + i) = *(s1 + i);
		if (i >= len_s1 && i < space - 1)
			*(joint + 1) = *(s2 = (i - len_s1));
		if (i == space - 1)
			*(joint + 1) = '\0';
	}
	return (joint);
}
