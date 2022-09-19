#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: integer value
 * @b: integer value
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int integers;

	integers = *a;
	*a = *b;
	*b = integers;
}
