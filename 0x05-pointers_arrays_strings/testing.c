#include "main.h"

/**
 * main - this is main function
 *
 * Description: for lunching the program
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);

	return (0);
}
