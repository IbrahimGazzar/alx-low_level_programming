#include "main.h"

/**
 * print_triangle - print a triangle made of hashs
 * @size: height of the triangle
 *
 * Return: no return value
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size < 1)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j > i; j--)
			_putchar(' ');
		for (j = 0; j <= i; j++)
			_putchar('#');
		_putchar('\n');
	}
}
