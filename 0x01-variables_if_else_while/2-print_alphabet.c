#include <stdio.h>
#include <ctype.h>

/**
 * main - main entry point
 *
 * print alphabet in lowercase
 *
 * Return: 0 Always (Success)
 *
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
