#include "main.h"

/**
 * print_square - prototype prints a square
 * @size: size of the square
 * @#: character to print square
 *
 * Return: 0 Always
 */
void print_square(int size)
{
	int row;
	int column;

	if (size >  0)
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				_putchar('#');
			}
			_putchar ('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
