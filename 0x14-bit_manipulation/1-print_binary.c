#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a uint
 * @n: unsigned int number
 *
 * Return: no return value
 */

void print_binary(unsigned long int n)
{
	unsigned long int i;

	i = 1;
	while (i < n)
		i *= 2;
	if (i > n)
		i = i >> 1;
	if (n == 0)
		_putchar('0');
	while (i > 0)
	{
		if ((n & i) > 0)
		{
			n -= i;
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		i = i >> 1;
	}
}
