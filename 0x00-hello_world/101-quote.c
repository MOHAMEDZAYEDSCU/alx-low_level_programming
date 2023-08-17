#include <stdio.h>

/**
 * main - this is main function
 *
 * Description: print using putchar
 *
 * Return: 1 Always
 *
 */

int main(void)
{
	char c[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i = 0;

	while (c[i] != '\0')
	{
		putchar(c[i]);
		i++;
	}
	putchar('\n');
	return (1);
}
