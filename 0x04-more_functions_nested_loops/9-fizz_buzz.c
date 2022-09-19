#include "main.h"

/**
 * main - Entry block
 * Return: 0 Success Always
 *
 */
int main(void)
{
	int n = 1;

	for (; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf('\n');
	return (0);
}
