#include "main.h"

/**
 * wildcmp - funciton to print strings
 *
 * Description: no more words to say
 * @s1: the reference of the string.
 * @s2: the second ref
 *
 * Return: no return for void function.
 */

int wildcmp(char *s1, char *s2)
{
	int ret = 0;

	if (!*s1 && *s2 == '*' && !*move_str(s2))
		return (1);

	else if (*s1 == *s2)
	{
		if (!*s1)
			return (1);

		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}

	if (!*s1 || !s2)
		return (0);

	if (*s2 == '*')
	{
		s2 = move_str(s2);

		if (!*s2)
			return (1);

		else if (*s1 == *s2)
			ret += wildcmp(s1 + 1, s2 + 1);

		ret += inception(s1, s2);

		return (!!ret);
	}
	return (0);
}

/**
 * move_str - funciton to print strings
 *
 * Description: no more words to say
 * @s2: the reference to the string.
 *
 * Return: as i declared in the code
 */

int *move_str(char *s2)
{
	if (*s2 == '*')
		return (move_str(s2 + 1));
	else
		return (s2);
}

/**
 * inception - funciton to print strings
 *
 * Description: no more words to say
 * @s2: the reference to the string.
 * @s1: the second pointer to array
 * Return: as i declared in the code
 */

int inception(char *s1, char *s2)
{
	int ret = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		ret += wildcmp(s1 + 1, s2 + 1);
	ret += inception(s1 + 1, s2);
	return (ret);
}
