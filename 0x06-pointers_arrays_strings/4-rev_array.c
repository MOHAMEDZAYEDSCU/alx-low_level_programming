#include "main.h"

/**
 * reverse_array - just one funciton here
 *
 * Description: how to reverse an array
 * @a: the adress of array
 * @n: the size of the array
 *
 * Return: returned reversed string.
 */

void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
