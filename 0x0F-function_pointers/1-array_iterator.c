#include <stddef.h>

/**
 * array_iterator - where i will write the code
 *
 * @array: pointer to int
 * @size: the size of array
 * @action: pointer to function
 *
 * Return: no return for void function.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action && size)
	{
		for(i = 0 ; i < size ; i++)
		{
			(*action)(array[i]);
		}
	}
}
