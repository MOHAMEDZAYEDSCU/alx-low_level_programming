#include "main.h"

/**
 * _realloc - make block of memory for use
 *
 * @ptr: pointer to an array
 * @old_size: the old array size
 * @new_size: the new array size
 *
 * Return: void function
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *res = "";

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		res = malloc(new_size);
		if (res == NULL)
			return (NULL);

		return (res);
	}

		res = malloc(new_size);

		if (res == NULL)
			return (NULL);

		for (i = 0 ; i < old_size && i < new_size ; ++i)
			res[i] = ((char *)ptr)[i];

	free(ptr);
	return (ptr);
}
