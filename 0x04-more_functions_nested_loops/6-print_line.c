#include "main.h"

/**
 * print_line - prototype that draws a straight line
 *
 * @n: number of times _ shoulld be printed
 *
 * Return: 0 Always
 *
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
