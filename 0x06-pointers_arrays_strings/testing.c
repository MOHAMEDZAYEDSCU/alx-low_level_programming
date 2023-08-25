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
	char str[] = "Look up!\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
