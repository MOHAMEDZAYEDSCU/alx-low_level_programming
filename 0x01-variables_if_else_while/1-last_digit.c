#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - more headers goes there
 *
 * Description: see the last number in large number
 *
 * betty style doc for function main goes there
 *
 * Return: 0
 */

int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	x = n % 10;
	if (x == 0)
	{
		printf("Last digit of %i is 0 and is 0\n", n);
	}
	else if (x > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, x);
	}
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, x);

	return (0);
}
