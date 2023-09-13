#include <stddef.h>

/**
 * int_index - where i will write the code
 *
 * @array: pointer to int
 * @size: the size of array
 * @cmp: pointer to function
 *
 * Return: no return for void function.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, test = 0;

	if (array && cmp && size)
	{
		for (i = 0 ; i < size ; i++)
		{
			test = (*cmp)(array[i]);

			if (test == 1)
				return (i);
		}
	}
	return (-1);
}
