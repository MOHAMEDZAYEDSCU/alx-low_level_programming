#include <stdio.h>

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
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
