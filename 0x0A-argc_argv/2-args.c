#include "main.h"

/**
 * main - program prints all arguments
 * arguments should be printed including
 * the program name ending with a new line
 * @argc: arguments count
 * @argv: pointer to strings
 *
 * Return: 0 Always (Success)
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
