#include "main.h"

/**
 * *_strdup - this is main function
 *
 * @str: pointer to the string
 *
 * Return: NULL or pointer to the array.
 */

char *_strdup(char *str)
{
	char *dup;
	int i, len;

	if (!str)
		return (NULL);

	for (len = 0; str[len]; len++) /* strlen(str); */
		;

	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);

	for (i = 0; i < len; i++) /* strcpy(dup, str); */
		dup[i] = str[i];
	dup[i] = '\0';

	return (dup);
}
