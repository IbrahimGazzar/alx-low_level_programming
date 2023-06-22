#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9, followed by a new line
 *
 * Return: no return value
 */

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
