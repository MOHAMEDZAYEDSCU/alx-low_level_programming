#include "main.h"

/**
 * _print_rev_recursion - funciton to print strings
 *
 * Description: no more words to say
 * @s: pointer to an arary
 *
 * Return: no return for void function
 */

void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
