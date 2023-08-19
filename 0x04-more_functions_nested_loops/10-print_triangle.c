#include "main.h"

/**
 * print_triangle - check the code
 * Descritpion: how to print triangle
 * @size: the hight of the triangle
 * Return: Always 0
 *
 */

void print_triangle(int size)
{
	int lines, spaces, simpol;

	for (lines = 1 ; lines <= size ; lines++)
	{
		for (spaces = size - lines ; spaces >= 1 ; spaces--)
		{
			putchar(' ');
		}
		for (simpol = 0 ; simpol < lines ; simpol++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
