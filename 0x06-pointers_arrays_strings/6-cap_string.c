#include "main.h"

/**
 * cap_string - pointer to function
 *
 * Description: capital the first character
 * @c: every character would be stored in c
 *
 * Return: no return for void function
 */

char *cap_string(char *c)
{
	char *ptr = c;
	int flag = 0;

	if (*ptr >= 'a' && *ptr <= 'z')
		*ptr = toupper(*ptr);

	while (*ptr != '\0')
	{
		while (*ptr == ' ' || *ptr == '\n' || *ptr == '\t' || *ptr == '.')
		{
			ptr++;
			flag = 1;
		}

		if (flag)
		{
			*ptr = toupper(*ptr);
			flag = 0;
		}

		ptr++;
	}

	return (c);
}
