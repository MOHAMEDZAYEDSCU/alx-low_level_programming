#include "main.h"

/**
 * *str_concat - this is main function
 *
 * @s1: the first pointer
 * @s2: to the first location in memory
 *
 * Return: NULL or pointer to the array.
 */

char *str_concat(char *s1, char *s2)
{
	char *x;
	int i1 = 0, i2 = 0, i, j;

	if (!s1)
		s1 = '\0';
	if (!s2)
		s2 = '\0';
		

	for (i1 = 0 ; s1[i1] != '\0' ; i1++)
		;
	for (i2 = 0 ; s2[i2] != '\0' ; i2++)
		;

	if (i1 == 0 && i2 == 0)
		return (NULL);

	x = malloc(sizeof(char) * (i1 + i2 + 1));

	if (!x)
		return (NULL);

	for (i = 0 ; i < i1 ; i++)
		x[i] = s1[i];

	for (j = i ; j < (i1 + i2 + 1) ; j++)
	{
		x[j] = *s2;
		s2++;
	}

	x[j] = '\0';

	return (x);
}
