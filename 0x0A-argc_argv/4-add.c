#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - this is main function
 *
 * @argc: the number of arguments
 * @argv: the pointer to the string of arguments
 *
 * Return: 0 always.
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c ; c++)
		{
			if (*c < '0' || *c > '9')
				return (printf("Error\n"));
			sum += atoi(argv[argc]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
