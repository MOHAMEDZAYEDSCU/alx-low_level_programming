#include <stdio.h>

/**
 * main - this is main funciton
 *
 * Descirption: print numbers and strings
 *
 * Return: 0 Always
 */

int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%i", i);
		}
		if (i < 100)
		{
			putchar(' ');
		}
	}
	return (0);
}
