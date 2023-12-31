#include <stdio.h>
#include <stdlib.h>

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
	int i, j, sum = 0;

	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0 ; argv[i][j] ; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
				return (printf("Error\n"), 1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
