#include "main.h"

/**
 * _islower - converts to lowercase
 *
 * @c: value to be compared
 * Return: Always 0 Success
 *
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);
}
