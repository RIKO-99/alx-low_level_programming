#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer string
 *
 * Return: void
 *
 */
void puts_half(char *str)
{
	int i;
	int str_len;
	int half;

	i = 0;
	str_len = 0;

	while (*(str + str_len) != '\0')
		str_len++;

	if ((str_len % 2) == 0)
		half = str_len / 2;

	else
		half = (str_len / 2) + 1;

	for (i = half; i < str_len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
