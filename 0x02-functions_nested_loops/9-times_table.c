#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: times table
 *
 */
void times_table(void)
{
	int numb, mult, product;

	for (numb = 0; numb <= 9; numb++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');
			product = numb * mult;

			if (product <= 9)
				_putchar(' ');
			else
			_putchar((product / 10) + '0');
			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
