#include "main.h"

/**
 * print_most_numbers - prints number fom 0 to 9
 * except integer 2 and 4
 *
 * Return: integer values
 */
void print_most_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
