#include "main.h"

/**
 * *_strdup - this is main function
 *
 * @str: pointer to the string
 *
 * Return: NULL or pointer to the array.
 */

char *_strdup(char *str)
{
	char *x;
	int size = strlen(str);
	int i;

	x = malloc(sizeof(char) * size);

	if (x == 0)
		return (NULL);

	for (i = 0 ; i < size ; i++)
		x[i] = str[i];

	return (x);
}
