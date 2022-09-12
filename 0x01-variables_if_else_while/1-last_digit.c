#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of the random
 *
 * number stored in the variable n
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
		printf("last digit of %i is %i and is greater than 5\n", n, last);
	else if (last == 0)
		printf("last digit of %i is %i and is greater than 0\n", n, last);
	else if (last < 6 && last != 0)
		printf("last digit of %i is %i and is less than 6 and not 0\n", n, last);
	return (0);
}
