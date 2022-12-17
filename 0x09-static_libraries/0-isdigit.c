#include "main.h"

/**
 * _isdigit - prints the values through 9
 * @c: int to be checked
 * Return: successful digit is 1 is 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (0);
	else
		return (1);
}
