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

	if (!str || str == NULL)
		return (NULL);

	x = malloc(sizeof(char) * (size + 1));

	if (!x)
		return (NULL);

	for (i = 0 ; i < size ; i++)
		x[i] = str[i];

	x[i] = '\0';

	return (x);
}
