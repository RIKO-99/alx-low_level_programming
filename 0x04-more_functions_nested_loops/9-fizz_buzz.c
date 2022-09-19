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
			putchar(" Fizz");
		}
		else if (n % 5 == 0)
		{
			putchar(" Buzz");
		}
		else
		{
			putchar(" %d", n);
		}
	}
	putchar('\n');
	return (0);
}
