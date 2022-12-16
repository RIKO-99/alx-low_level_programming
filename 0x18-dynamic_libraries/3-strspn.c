#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a  prefix substring
 * @s: main string to be scanned
 * @accept: string containing matching character
 *
 * Return: numbers of characters in initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}

	return (len);
}
