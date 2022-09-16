#include "main.h"
#include <ctype.h>

/**
 * main - checks the code
 *
 * Return: ALways 0
 *
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
