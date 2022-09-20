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
	int index = 0;

	while (*(str + index) != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
