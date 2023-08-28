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
	char *ptr = s;

	while (*ptr != '\0')
	{
		if (*ptr == c)
			return (ptr);
		ptr++
	}

	return ('\0');
}
