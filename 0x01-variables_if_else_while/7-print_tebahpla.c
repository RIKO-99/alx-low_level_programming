#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * prints the lowercase alphabets in reverse
 *
 * Return: 0 Always (Success)
 *
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
