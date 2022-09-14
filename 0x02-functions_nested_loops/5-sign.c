#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: n is an ASCII character
 *
 * Return: 1(positive), -1(negative), 0(if zero)
 *
 */
int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		i = -1;
		_putchar('-');
	}
	else
	{
		i = 0;
		_putchar('0');
	}
	return (i);
}
