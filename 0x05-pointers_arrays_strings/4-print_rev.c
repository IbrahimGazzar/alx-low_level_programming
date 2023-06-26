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

	for (i = 0; s[i] != '\0'; i++)
		continue;
	for (--i; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
