#include "function_pointers.h"

/**
 * print_name - function prints a name
 *
 * @name: name
 * @f: pointer
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
