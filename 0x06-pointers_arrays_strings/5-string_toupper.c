#include "main.h"

/**
 * *string_toupper - just one funciton here
 *
 * Description: how to reverse an array
 * @c: the adress of array
 *
 * Return: returned upper character string.
 */

char *string_toupper(char *c)
{
	int i;
	/*char tmp[99];*/

	while (c[i] != '\0')
	{
		c[i] = toupper(c[i]);
		i++;

	}

	return (c);
}
