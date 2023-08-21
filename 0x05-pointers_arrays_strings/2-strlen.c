#include "main.h"

/**
 * _strlen - this is main funciton
 *
 * Description: reset the value to 98
 *
 * @s: character for test the funciton
 *
 * Return: no return for void funciton
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
