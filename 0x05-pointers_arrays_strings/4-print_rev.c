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

	for (i = sizeof(*s); i >= 0; i--)
	{
		if (s[i] != '\0')
			_putchar(s[i]);
	}
	_putchar('\n');
}
