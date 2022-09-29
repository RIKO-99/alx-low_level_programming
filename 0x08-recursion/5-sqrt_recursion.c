#include "main.h"

/**
 * _sqrt_recursion - main function returns square root of a number
 * @n: integer
 *
 * Return:  square of a number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - sqrt_recursion
 * @i: integer param
 * @n: integer param
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
if (n < 0)
{
return (-1);
}
if ((i * i) > n)
{
return (-1);
}
if (i * i == n)
{
return (i);
}
return (_sqrt(n, i + 1));
}
