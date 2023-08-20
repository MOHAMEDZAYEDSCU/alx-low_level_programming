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
	int x = 10, i;

	for (i = 0 ; i < x ; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
