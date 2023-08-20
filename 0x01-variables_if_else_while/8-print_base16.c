#include <stdio.h>

/**
 * main - this is main funciton
 *
 * Description: function to print small alphabet
 *
 * Return: 0 Always
 */

int main(void)
{
	int x = 15, i;

	for (i = 0 ; i <= x ; i++)
	{
		if (i < 10)
		{
			putchar(('0' + i));
		}
		else
		{
			putchar((87 + i));
		}
	}
	putchar('\n');

	return (0);
}
