#include "main.h"
/*size_t strlen(const char *str);*/

/**
 * _puts - this is main funciton
 *
 * Description: reset the value to
 *
 * @s: character for test the funciton
 *
 * Return: no return for void funciton
 */

void _puts(char *s)
{
	unsigned int j, len = strlen(s);

	for (j = 0 ; j < len ; j++)
	{
		printf("%c", *s);
		s++;
	}
	putchar('\n');
}
