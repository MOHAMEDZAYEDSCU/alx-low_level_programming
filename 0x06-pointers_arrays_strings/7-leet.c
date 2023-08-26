#include "main.h"

/**
 * leet - a pointer to a function
 *
 * Description: no need for description
 * @c: the address of the array
 *
 * Return: modified string
 */

char *leet(char *c)
{
	char *ptr = c, test[] = "AaeEtToOlL", num[] = "4433770011";

	while (*ptr != '\0')
	{
		int i = 0;

		while (test[i] != '\0')
		{
			if (test[i] == *ptr)
				*ptr = num[i];

			i++;
		}
		ptr++;
	}

	return (c);
}
