#include "main.h"

/**
 * print_square - print a square with hashs
 * @size: length of the square
 *
 * Return: no return value
 */

void print_square(int size)
{
	int i;
	int j;

	if (size < 1)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		j = 0;
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
}
