#include "main.h"

/**
 * _puts - prints string
 * @str: string
 *
 * Return: Nothing
 *
 */
void _puts(char *str)
{
	int count;

	count = 0;

	while (str[count] != '\0')
	{
		_puts(str[count]);
		count++;
	}
	_puts('\n');
}
