#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
/**
 * print_strings - function prints string
 * @separator: strings to be printed
 * @n: number of strings passed
 *
 * Return: 0 Always
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	const char *ptr = separator;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
	       ptr = va_arg(ap, char*);

	if (ptr != NULL)
	printf("%s", ptr);

	}

	printf("\n");

	va_end(ap);
}
