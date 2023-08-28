#include "main.h"

/**
 * *_strpbrk - funciton to return the address of an array
 *
 * @accept: the element which would be the refrence
 * @s: the source array
 *
 * Return: pointer to an array or 0
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *p;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
		}
	}

	return ('\0');
}
