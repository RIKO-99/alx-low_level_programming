#include <unistd.h>

/**
 * _putchar - writes the charactert to stdout
 * @c: character to print
 *
 * Return: 1 Succcess, -1 error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
