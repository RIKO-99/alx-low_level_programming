#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: main string to be scanned
 * @needle: small string(substring) to be searched in haystack
 *
 * Return: returns pointer to the first occurence
 * in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	char *result;

	for (i = 0, k = 0; haystack[i] != '\0'; i++, j++)
	{
		result = &haystack[i];
		j = 0;
		while (needle[j + k] != '\0' && haystack[i + k] != '\0'
			&& needle[j + k] == haystack[i + k])
		{
			if (haystack[i + k] != needle[j + k])
				break;
			k++;
		}
		if (needle[j + k] == '\0')
			return (result);
	}
	return (0);
}
