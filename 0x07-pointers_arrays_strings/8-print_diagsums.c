#include "main.h"

/**
 * print_diagsums - funciton to return the address of an array
 *
 * @a: the first one
 * @size: the second one
 *
 * Return: pointer to an array or 0
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0, x = size - 1;

		for (j = 0 ; j < size ; j++)
			sum1 += a[j * size + j];

		for (i = 0 ; i < size && x >= 0 ; i++)
		{
			sum2 += a[i * size + x];
			x--;
		}

	printf("%d", sum1);
	printf(", ");
	printf("%d", sum2);
	printf("\n");
}
