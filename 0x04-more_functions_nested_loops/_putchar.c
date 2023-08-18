#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the characters
 *
 * @c: a character to print
 *
 * Return: 1 on sucess.
 *	on error, -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
