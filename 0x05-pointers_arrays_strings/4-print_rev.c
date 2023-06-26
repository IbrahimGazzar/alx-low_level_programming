#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 *
 * Return: no return value
 */

void print_rev(char *s)
{
	int i;

	for (i = sizeof(s) - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
