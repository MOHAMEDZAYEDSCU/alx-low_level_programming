#include "main.h"

/**
 * string_nconcat - make block of memory for use
 *
 * @s1: the first word
 * @s2: the second word
 * @n: number of charater of second word
 *
 * Return: void function
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, s1_len, s2_len, temp;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_len = 0 ; s1[s1_len] ; s1_len++)
		;
	for (s2_len = 0 ; s2[s2_len] ; s2_len++)
		;

	temp = (s2_len <= n) ? s2_len : n;

	ptr = calloc((temp + s1_len + 1), sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; i < s1_len ; i++)
		ptr[i] = s1[i];

	for (j = 0 ; j < temp ; j++)
		ptr[i + j] = s2[j];

	return (ptr);
}
