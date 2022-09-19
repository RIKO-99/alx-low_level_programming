#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 Always
 *
 */
int main(void)
{
	int n = 1;

	for (; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			_putchar(" Fizz");
		}
		else if (n % 5 == 0)
		{
			_putchar(" Buzz");
		}
		else
		{
			_putchar(" %d", n);
		}
	}
	_putchar('\n');
	return (0);
}
