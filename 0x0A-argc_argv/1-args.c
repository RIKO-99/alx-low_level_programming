#include "main.h"
#include <stdlib.h>

/**
 * main - program that prints the number of
 *  arguments passed to it
 *  program prints a number followed by new line
 *  @argc: argument count
 *  @argv: pointer to string
 *
 * Return: 0 Always (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
