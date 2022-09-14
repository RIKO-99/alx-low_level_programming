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
	int test;

	if (n > 0)
	{
		test = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		test = 0;
		_putchar(0);
	}
	else if
	{
		test = -1;
		_putchar('-');
	}
	else
	{
		_putchar(0)
	}
	return (test);
}
