#include "main.h"

/**
 * _strspn - funciton to return the address of an array
 *
 * @accept: the element which would be the refrence
 * @s: the source array
 *
 * Return: pointer to an array or 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (j = 0 ; s[j] != '\0' ; j++)
	{
		for (i = 0 ; accept[i] != s[j] ; i++)
		{
			if (accept[i] == '\0')
				return (j);
		}
	}

	return (j);
}
