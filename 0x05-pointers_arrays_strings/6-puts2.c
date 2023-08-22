#include "main.h"

/**
 * puts2 - this is main funciton
 *
 * Description: reverse a specific sentence
 *
 * @s: character for test the funciton
 *
 * Return: no return for void funciton
 */

void puts2(char *s)
{
	int j, len = strlen(s);

	for (j = 0 ; j < len ; j++)
	{
		if (s[j] % 2 == 0)
			putchar(s[j]);

	}
	putchar('\n');
}
