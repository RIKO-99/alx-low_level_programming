#include "main.h"

/**
 * _puts_recursion - prints a string into a new line
 * @s: string to the stdout
 *
 * Return: string to stdout
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
