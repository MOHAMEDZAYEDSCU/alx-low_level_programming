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
	char *ptr = c;

	if (c == NULL)
	{
		return NULL;
	}

	while (*ptr != '\0')
	{
		*ptr = toupper(*ptr);
		ptr++;
	}

	return (c);
}
