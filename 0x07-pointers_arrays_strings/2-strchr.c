#include "main.h"

/**
 * *_strchr - funciton to return the address of an array
 *
 * @c: the element which would be the refrence
 * @s: the source array
 *
 * Return: pointer to an array &S
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
