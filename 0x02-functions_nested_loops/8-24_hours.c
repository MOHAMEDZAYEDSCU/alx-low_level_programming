#include "main.h"

/**
 * jack_bauer - this is the only funciton here
 *
 * Description: for printing time to 24 min
 *
 * Return: no return for void function
 */

void jack_bauer(void)
{
	int i, j, k, l, flag = 1;

	for (i = 0 ; i < 3 && flag ; i++)
	{
		for (j = 0 ; j <= 9 && flag ; j++)
		{

			for (k = 0 ; k <= 5 && flag ; k++)
			{
				for (l = 0 ; l <= 9 && flag ; l++)
				{
					if (i == 2 && j == 3 && k == 5 && l == 9)
					{
						_putchar(i + '0');
						_putchar(j + '0');
						_putchar(':');
						_putchar(k + '0');
						_putchar(l + '0');
						_putchar('\n');
						flag = 0;
						break;
					}
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
			}
		}
	}
}
