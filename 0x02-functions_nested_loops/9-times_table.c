#include "main.h"

/**
 * times_table - print the full time table for the first 9 numbers
 *
 * Return: no return value
 */

void times_table(void)
{
	int num1;
	int num2;
	int result;
	int result_01;
	int result_10;

	for (num1 = 0; num1 < 10; num1++)
	{
		_putchar('0');
		_putchar(',');
		for (num2 = 1; num2 < 10; num2++)
		{
			result = num1 * num2;
			result_01 = result % 10;
			result_10 = (result - result_01) / 10;
			_putchar(' ');
			if(result_10 > 0)
				_putchar(result_10 + 48);
			else
				_putchar(' ');
			_putchar(result_01 + 48);
			_putchar(',');
		}
		_putchar('\n');
	}
}
