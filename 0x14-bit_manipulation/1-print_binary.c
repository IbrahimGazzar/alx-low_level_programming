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
	int p;

	i = 1UL << (sizeof(n) * 8 - 1);
	p = 0;
	while (i > 0)
	{
		if (n & i)
		{
		        _putchar('1');
			p = 1;
		}
		else if (p)
		{
			_putchar('0');
		}
		i = i >> 1;
	}
	if (!p)
		_putchar('0');
}
