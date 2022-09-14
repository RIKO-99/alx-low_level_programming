#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: c is an ascii character
 *
 * Return: 0 0r 1
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
