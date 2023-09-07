#include "main.h"

/**
 * array_range - make block of memory for use
 *
 * @min: minimum number
 * @max: maximum number
 *
 * Return: void function
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1)*sizeof(int));

	if (ptr == NULL)
		return (NULL);

	/*for (i = 0 ; i < max - min + 1 ; i++)
		ptr[i] = 0;*/

	return (ptr);
}
