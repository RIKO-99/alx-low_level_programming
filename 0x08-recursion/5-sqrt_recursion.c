#include "main.h"

int _sqrt(int x, int y);
/**
 * _sqrt_recursion - main function returns square root of a number
 * @n: integer
 *
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1)

	else if (n == 1)
		return (1);

	else
		return (_sqrt(n, 1));
}

/**
 * _sqrt - find the square root of a number
 * @x: number to multiply
 * @y: base number, square of x
 *
 * Return: y if true || -1
 */
int _sqrt(int x, int y)
{
	if (y * y == x)
		return (y);

	else if (y * y > x)
		return (-1);

	else
		return (_sqrt(x, y + 1));
}
