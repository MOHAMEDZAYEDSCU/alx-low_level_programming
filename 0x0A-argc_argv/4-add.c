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
	int i, add = 0;

	if (argc == 1)
		return (0);

	for (i = 0 ; i < argc ; i++)
	{
		if (argv[i] >= 'a' && argv[i] <= 'z')
		{
			printf("Error\n");
			return (0);
		}
		add += atoi(argv[i]);
	}

	return (add);
}
