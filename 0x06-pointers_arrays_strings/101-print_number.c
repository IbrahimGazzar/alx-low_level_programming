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
	int temp;

	if (n < 0)
		_putchar('-');
	cnt = 0;
	for (i = 1000000000; i >= 0; i /= 10)
	{
		temp = n / i;
		if (temp != 0 || cnt != 0)
		{
			if (temp < 0)
				temp = 0 - temp;
			_putchar(temp + 48);
			cnt++;
		}
	}
}
