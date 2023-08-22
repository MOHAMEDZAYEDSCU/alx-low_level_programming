#include "main.h"

/**
 * puts_half - this is main funciton
 *
 * Description: print the half of the string
 *
 * @str: character for test the funciton
 *
 * Return: no return for void funciton
 */

void puts_half(char *str)
{
	int j = 0;
	int k;

	while (str[j] != '\0')
	{
		j++;
	}

	if (j % 2 == 1)
	{
		k = (j - 1) / 2;
		k += 1;
	}
	else
	{
		k = j / 2;
	}

	for (; k < j; k++)
	{
		putchar(str[k]);
	}

	putchar('\n');
}
