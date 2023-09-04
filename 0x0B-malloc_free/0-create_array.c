#include "main.h"

/**
 * *create_array - this is main function
 *
 * @size: the size of variable
 * @c: to the first location in memory
 *
 * Return: NULL or pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *x;

	if (size == 0)
		return (NULL);

	x = malloc(sizeof(char) * size);


	if (x == 0)
		return (NULL);

	memset(x, c, size);

	return (x);
}
