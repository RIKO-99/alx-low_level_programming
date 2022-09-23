#include "main.h"

/**
 * reverse_array - Reverse content of array of integers
 * @a: integer value to pointer
 * @n: number of elements in an array
 * also length of the array
 *
 * Return: Nothing
 *
 */
void reverse_array(int *a, int n)
{
	int temp, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temp = a[counter];
		a[counter++] = a[n];
		a[n--] = temp;
	}
}
