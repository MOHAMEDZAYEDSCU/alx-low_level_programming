#include "main.h"

/**
 * _strncpy - a pointer to a function
 *
 * Description: for concatinater 2 strings
 * @dest: the first input string
 * @src: the second input string
 * @n: number of character wanted
 *
 * Return: concatinated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int s2;

	for (s2 = 0; s2 < n && src[s2] != '\0'; s2++)
	{
		dest[s2] = src[s2];
	}

		while (s2 < n)
		{
			dest[s2] = '\0';
			s2++;
		}

	return (dest);
}
