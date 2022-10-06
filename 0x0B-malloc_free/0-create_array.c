#include "main.h"

/**
 * create_array - function creates array of chars
 *
 * @size: size of the string
 * @c: string to pointer
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	int *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(size * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);

	free(str);
}
