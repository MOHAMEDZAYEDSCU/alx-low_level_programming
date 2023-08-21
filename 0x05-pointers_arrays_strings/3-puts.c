#include "main.h"
size_t strlen(const char *str);

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
	long unsigned int j;
	size_t length = strlen(s);

	for (j = 0 ; j < length ; j++)
	{
		printf("%c", *s);
		s++;
	}
	putchar('\n');
}
