#include "main.h"

/**
 * print_line - print a line using underscores with a given length
 * @n: length of the line
 *
 * Return: no return value
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
