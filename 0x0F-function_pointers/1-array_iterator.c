#include "function_pointers.h"

/**
 * array_iterator - executes function as paramaters
 * @array: pointer to array
 * @size: size of array
 * @action: pointer function call
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
