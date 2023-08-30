#include "main.h"

/**
 * _puts_recursion - funciton to print strings
 *
 * Description: no more words to say
 * @s: pointer to an arary
 *
 * Return: no return for void function
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	_putchar('\n');
}
