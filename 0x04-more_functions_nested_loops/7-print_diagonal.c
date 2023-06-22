#include "main.h"

/**
 * print_diagonal - draw a diagonal line with given length n
 * @n: length of the diagonal line
 *
 * Return: no return value
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n < 1)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
