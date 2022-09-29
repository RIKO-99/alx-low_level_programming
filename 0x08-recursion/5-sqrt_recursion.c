#include "main.h"

int _sqrt(int a, int b);
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
 * @a: number to multiply
 * @b: base number, square of x
 *
 * Return: y if true || -1
 */
int _sqrt(int a, int b)
{
	if (b * b == a)
		return (b);

	else if (b * b > a)
		return (-1);

	else
		return (_sqrt(a, b + 1));
}
