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

	/*while (dest[s1])*/
		/*s1++;*/

	for (s2 = 0; s2 < n; s2++)
	{
		if (src[s2] == '\0')
		{
			dest[s2] = '\0';
			return (dest);
		}
		dest[s2] = src[s2];
	}
	dest[s2] = '\0';
	return (dest);
}
