#include "main.h"

/**
 * print_rev - prints the reverse of a string
 *
 * @s: charater in Ascii
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int reverse;
	int str_len;

	reverse = 0;

	while (*(s + reverse) != '\0')
	{
		reverse++;
	}
	for (str_len = reverse - 1; str_len >= 0; str_len--)
	{
		_putchar(s[str_len]);
	}
	_putchar('\n');
}
