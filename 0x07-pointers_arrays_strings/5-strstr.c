#include "main.h"

/**
 * *_strstr - funciton to return the address of an array
 *
 * @haystack: the first one
 * @needle: the second one
 *
 * Return: pointer to an array or 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *result = strstr(haystack, needle);

	if (result != NULL)
		return (result);
	else
		return ('\0');

}
