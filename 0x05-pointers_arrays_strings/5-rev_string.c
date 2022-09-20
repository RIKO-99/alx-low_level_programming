#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string character
 *
 * Return: Nothing
 *
 */
void rev_string(char *s)
{
	int i, str_len, temp;

	i = 0;

	while (*(s + i) != '\0')
		i++;

	str_len = i;

	for (i = str_len - 1; i >= (str_len / 2); i--)
	{
		temp = s[i];
		s[i] = s[str_len - i - 1];
		s[str_len - i - 1] = temp;
	}
}
