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
	char *ptr = c;

	while (*ptr != '\0')
	{
			if (*ptr == 'a' || *ptr == 'A')
				*ptr = '4';

			else if (*ptr == 'e' || *ptr == 'E')
				*ptr = '3';

			else if (*ptr == 't' || *ptr == 'T')
				*ptr = '7';

			else if (*ptr == 'o' || *ptr == 'O')
				*ptr = '0';

			else if (*ptr == 'l' || *ptr == 'L')
				*ptr = '1';

		ptr++;
	}
	return (c);
}
