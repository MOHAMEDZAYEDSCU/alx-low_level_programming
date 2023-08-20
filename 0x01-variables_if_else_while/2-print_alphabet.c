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
	int x = 26, i;
	/*char c[] = {'a'};*/

	for (i = 0 ; i < x ; i++)
	{
		putchar((97 + i));
	}
	putchar('\n');

	return (0);
}
