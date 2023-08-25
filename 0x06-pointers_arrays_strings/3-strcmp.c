#include "main.h"

/**
 * _strcmp - a pointer to a function
 *
 * Description: for comapare 2 strings
 *
 * @s1: the first input string
 * @s2: the second input string
 *
 * Return: concatinated string
 */

int _strcmp(char *s1, char *s2)
{
	int len1 = strlen(s1), len2 = strlen(s2), i, tmp, flag = 0;

	if (len2 < len1)
	{
		tmp = len1;
		len1 = len2;
		len2 = tmp;
		flag = 1;
	}

	for (i = 0; i < len1; i++)
	{
		if (s1[i] < s2[i])
			return (((int) s1[i] - s2[i]));

		else if (s1[i] > s2[i])
			return ((int) s1[i] - s2[i]);
	}

	if (flag == 0 && len1 != len2)
		return ((int) s1[i] - s2[i]);

	else if (flag == 1 && len1 != len2)
		return ((int) s1[i] - s2[i]);

	else
		return (0);
}
