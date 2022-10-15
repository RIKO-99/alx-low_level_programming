#include "variadic_functions.h"
#include <string.h>
#include <stdarg.h>

/**
 * print_strings - function prints string
 * @separator: string separator
 * @n: number of strings passed
 *
 * Return: Nothing
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *ptr;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(ap, char*);

		if (ptr)
			printf("%s", ptr);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(ap);
}
