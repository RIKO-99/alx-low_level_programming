#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - function return the sum of paramaters
 * @n: number of paramaters
 *
 * Return: 0 Always (Succcess)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;
	int sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);
	if (i == 0)
		return (0);

	va_end(ap);

	return (sum);
}
