#include "main.h"

/**
 * print_number - print a number
 * @n: number to be printed
 *
 * Return: no return value
 */

void print_number(int n)
{
	int i;
	int cnt;

	if (n < 0)
		_putchar('-');
	cnt = 0;
	for (i = 1000000000; i >= 0; i /= 10)
	{
		if (n / i != 0 || cnt != 0)
		{
			_putchar((n / i) + 48);
			cnt++;
		}
	}
}
