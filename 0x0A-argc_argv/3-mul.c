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
	if (argc != 3)
		printf("Error\n");

	else
	{
		long int x = atoi(argv[1]) * atoi(argv[2]);
		printf("%ld\n", x);
	}
	return (0);
}
