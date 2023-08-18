/*#include "main.h"*/
#include <stdio.h>

/**
 * main - check the code.
 *
 * Description: check if upper or lower
 *
 * Return: 0 or 1 as needed
 */

int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
