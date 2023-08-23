#include "main.h"

/**
 * _strcat - a pointer to a function
 *
 * Description: for concatinater 2 strings
 * @dest: the first input string
 * @src: the second input string
 *
 * Return: concatinated string
 */

char *_strcat(char *dest, char *src)
{
	int s1 = 0, s2;

	while (dest[s1])
		s1++;

	for (s2 = 0; src[s2]; s2++)
	{
		dest[s1++] = src[s2];
	}
	return (dest);
}
