#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: pointer to string
 * @s2: pointer to string
 *
 * Return: 0 Always
 *
 */
int _strcmp(char *s1, char *s2)
{
	int counter, compare;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	compare = s1[counter] - s2[counter];
	return (compare);
}
