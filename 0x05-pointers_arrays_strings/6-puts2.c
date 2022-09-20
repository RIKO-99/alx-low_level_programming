#include "main.h"

/**
 * puts2 - prints other characters of a string
 * @str: pointer to the string
 *
 * Return: Nothing
 *
 */
void puts2(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;

	while (*(str + count) != '\0')
		count++;

	for (i = 0; i < count; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
