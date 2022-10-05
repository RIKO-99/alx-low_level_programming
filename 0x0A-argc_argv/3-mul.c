#include "main.h"

/**
 * main - Entry point
 * program prints result of multiplication in a new line
 * Error for more than two arguments passed
 * @argc: argument count
 * @argv: pointer to string
 *
 * Return: 0 Success and 1 for error
 */
int main(int argc, char *argv[])
{
	int x, y, product;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		product = x * y;
		printf("%d\n", product);
	}

	return (0);
}
