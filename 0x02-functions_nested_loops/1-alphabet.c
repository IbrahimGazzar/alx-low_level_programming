#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * print alphabet - print the alphabet in lowercase
 *
 * Return: return no value
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
