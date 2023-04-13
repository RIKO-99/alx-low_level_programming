#include "search_algos.h"

/**
* binary_search - a function to perform binary search
* @array: pointer to the first element (points the whole list)
* @size: size of the array
* @value: the value to search in the list array
* Return: -1 on failure, the index on success
*/
int binary_search(int *array, size_t size, int value)
{
	size_t f, l, m, i;

	f = 0;
	l = size - 1;

	if (array == NULL)
		return (-1);

	while (f <= l)
	{
		m = f + (l - f) / 2;
		printf("Searching in array: ");
		for (i = f; i < l; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[l]);

		if (value == array[m])
			return (m);
		else if (value < array[m])
		{
			l = m - 1;
		}
		else if (value > array[m])
		{
			f = m + 1;
		}
	}

	return (-1);
}
