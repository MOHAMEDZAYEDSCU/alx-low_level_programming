#include "main.h"

/**
 * rev_string - this is main funciton
 *
 * Description: reverse a specific sentence
 *
 * @s: character for test the funciton
 *
 * Return: no return for void funciton
 */

void rev_string(char *s)
{
int j, i;
char c;

for (j = 0; s[j] != '\0' ; j++)
{
	;
}
for (i = 0 ; i < j / 2 ; i++)
{
c = s[j - i - 1];
s[j - i - 1] = s[i];
s[i] = c;
}
}
