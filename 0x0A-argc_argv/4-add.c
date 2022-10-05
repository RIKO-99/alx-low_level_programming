#include "main.h"
#include <ctype.h>

/**
 * main - program adds positive numbers
 * if no numbers prints 0 followed by new line
 * if number contain symbols print error then a new line
 * @argc: argument count
 * @argv: pointer to string
 *
 * Return: 0 0r 1 for error
 */

int main(int argc, char *argv[])
{
	int sum, i, j;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);

}
