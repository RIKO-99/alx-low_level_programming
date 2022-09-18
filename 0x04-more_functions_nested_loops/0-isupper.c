#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks the code
 * @c: character value
 *
 * Return: ALways 0 or 1
 *
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
