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

char *str;
int len;

str = "My first strlen!";
len = _strlen(str);
printf("%d\n", len);

return (0);
}

