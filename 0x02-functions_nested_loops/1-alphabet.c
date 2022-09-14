#include <stdio.h>

/**
 * print_alphabet - Entry point
 *
 * pogram prints alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;

	}
	putchar('\n');

}
