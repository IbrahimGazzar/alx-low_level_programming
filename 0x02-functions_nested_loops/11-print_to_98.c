#include "main.h"

/**
 * print_to_98 - print all numbers from n to 98
 * @n: the starting number of the sequence
 *
 * Return: no return value
 */

void print_to_98(int n)
{
	int i;
	int n_abs;
	int n_100;
	int n_010;
	int n_001;

	if (n < 0)
		n_abs = 0 - n;
	else
		n_abs = n;
	if (n > 98)
	{
		above_98(n);
	}
	else
	{
		for (i = n; i < 98; i++)
		{
			n_001 = n_abs % 10;
			n_010 = ((n_abs % 100) - n_001) / 10;
			n_100 = (n_abs - (n_abs % 100)) / 100;
			if (i < 0)
				_putchar('-');
			if (n_100 > 0)
				_putchar(n_100 + 48);
			if (n_010 > 0)
				_putchar(n_010 + 48);
			_putchar(n_001);
			_putchar(',');
			_putchar(' ');

		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}

/**
 * above_98 - called in case n is larger than 98
 * @n: number that starts the sequence
 *
 * Return: no return value
 */

void above_98(int n)
{
	int i;
	int n_100;
	int n_010;
	int n_001;

	for (i = n; i > 98; i--)
	{
		n_001 = n % 10;
		n_010 = ((n % 100) - n_001) / 10;
		n_100 = (n - (n % 100)) / 100;
		if (n_100 > 0)
			_putchar(n_100 + 48);
		if (n_010 > 0)
			_putchar(n_010 + 48);
		_putchar(n_001);
		_putchar(',');
		_putchar(' ');
	}
}
	