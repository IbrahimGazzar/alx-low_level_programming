#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase, 10 times
 *
 * Return: return no value
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		c = 'a';
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
