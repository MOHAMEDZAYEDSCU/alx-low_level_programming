/*#include "main.h"*/
#include <stdio.h>
#include <ctype.h>

/**
 * main - check the code.
 *
 * Description: check if upper or lower
 *
 * Return: 0 Always
 */

int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, (isupper(c) - 255));
	c = 'a';
	printf("%c: %d\n", c, isupper(c));

	return (0);
}
