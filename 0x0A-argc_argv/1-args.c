#include "main.h"

/**
 * main - program that prints the number of
 *  arguments passed to it
 *  program prints a number followed by new line
 *  @argc: argument count
 *  @argv: pointer to string
 *
 * Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
	int count;

	printf("This program was called with \"%s\".\n", argv[0]);

	if (argc < 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("argv[%d] = %s\n", count, argv[count]);
		}
	}
	else
	{
		printf("The command had no other arguments.\n");
	}
	return (0);
}
