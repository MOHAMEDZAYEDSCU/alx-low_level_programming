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
	int x = 26, i, zezo;
	/*char c[] = {'a'};*/

	for (i = 0 ; i < x ; i++)
	{
		zezo = 97 + i;
		if (zezo == 101 || zezo == 113)
		{
			continue;
		}

		putchar((97 + i));
	}
	putchar('\n');

	return (0);
}
