#include "main.h"

/**
 * is_palindrome - funciton to print strings
 *
 * Description: no more words to say
 * @s: the reference of the string.
 *
 * Return: no return for void function.
 */

int is_palindrome(char *s)
{
	int x = strlen(s);
	char *ptr1 = s, *ptr2 = s + x - 1;

	return (pali(ptr1, ptr2));
}

/**
 * pali - funciton to print strings
 *
 * Description: no more words to say
 * @s_begin: the reference to the string.
 * @s_end: just the base number.
 *
 * Return: as i declared in the code
 */

int pali(char *s_begin, char *s_end)
{
	if (s_begin >= s_end && *s_begin == *s_end)
		return (1);

	else if (*s_begin != *s_end)
		return (0);

	return (pali(s_begin + 1, s_end - 1));
}
