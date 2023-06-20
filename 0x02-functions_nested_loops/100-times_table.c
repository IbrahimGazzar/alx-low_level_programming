#include "main.h"

/**
 * print_times_table - print a 2d time table
 * @n: the number that determines the dimensions of the times table
 *
 * Return: no return value
 */

void print_times_table(int n)
{
	int num1;
	int num2;
	int result;
	int result_100;
	int result_010;
	int result_001;

	if (n < 0 || n > 15)
		return;
	for (num1 = 0; num1 <= n; num1++)
	{
		_putchar('0');
		for (num2 = 1; num2 <= n; num2++)
		{
			if (num2 < n)
			{
				_putchar(',');
				_putchar(' ');
			}
			result = num1 * num2;
			result_001 = result % 10;
			result_010 = ((result % 100) - result_001) / 10;
			result_100 = (result - (result % 100)) / 100;
			if (result_100 > 0)
				_putchar(result_100 + 48);
			else
				_putchar(' ');
			if (result_010 > 0 || result_100 > 0)
				_putchar(result_010 + 48);
			else
				_putchar(' ');
			_putchar(result_001 + 48);
		}
		_putchar('\n');
	}
}
