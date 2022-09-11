#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * task : prints out lower alphabet, Uppercase and next line
 *
 * strict : using 3 putchar
 *
 */



int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
{
	putchar(n);
}
for (n = 'A'; n <= 'Z'; n++)
{
	putchar(n);
}
putchar('\n');
return (0);
}
