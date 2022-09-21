#include "main.h"

/**
 * print_rev - prints the reverse of a string
 *
 * @s: string value
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i = 0;
	int str_len;

	while (*(s + i) != '\0')
	{
		i++;
	}
	for (str_len = i - 1; str_len >= 0; str_len--)
	{
		_putchar(s[str_len]);
	}
	_putchar('\n');
}
