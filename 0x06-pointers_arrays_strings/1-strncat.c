#include "main.h"

/**
 * _strncat - a pointer to a function
 *
 * Description: for concatinater 2 strings
 * @dest: the first input string
 * @src: the second input string
 * @n: number of character wanted
 *
 * Return: concatinated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int s1 = 0, s2;

	while (dest[s1])
		s1++;

	for (s2 = 0; s2 < n; s2++)
	{
		dest[s1] = src[s2];
		s1++;
	}
	return (dest);
}
