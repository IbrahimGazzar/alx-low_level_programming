#include "main.h"

/**
 * print_last_digit - prints the last digit of a given number
 * @n: the input number
 *
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int d;

	d = n % 10;
	if (d < 0)
		d = 0 - d;
	_putchar(d + 48);
	return (d);
}
