#include "main.h"

int is_prime(int a, int b);

/**
 * is_prime_number - checks for prime number
 * @n: integer
 *
 * Return: 1 for prime , o if negative
 */
int is_prime_number(int n)
{
	return (is_prime(n - 1, n));
}
/**
 * is_prime - computes for a prime number.
 * @a: first number
 * @b: comparison value
 *
 * Return: 1 if prime, o otherwise
 */
int is_prime(int a, int b)
{
	if (a < 1)
		return (0);

	else if (a == 1)
		return  (1);

	else
	{
		if (b % a == 0)
		{
			return (0);
		}
		else
		{
			return (is_prime(a - 1, b));
		}
	}
}
