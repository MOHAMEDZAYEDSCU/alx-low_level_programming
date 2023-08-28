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
	while (*s != '\0')
	{
		if (*s == c)
		{
			while (*s != '\0')
			{
				putchar("%c", *s);
				s++;
			}
		}
		s++
	}

	return (NULL);
}
