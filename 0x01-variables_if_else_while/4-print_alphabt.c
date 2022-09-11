#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * print alphabets except character e and q
 *
 * Return: 0 Always (Success)
 *
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n == 'e' || n == 'q')
		{

		}
		else
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
