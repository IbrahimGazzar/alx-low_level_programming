#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - sums up all its parameters
 * @n: number of parameters
 * @...: parameters to be summed
 * 
 * Return: sum of the given parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list argues;
	unsigned int i;
	int sum;

	sum = 0;
	if (n > 0)
	{
		va_start(argues, n);
		for (i = 0; i < n; i++)
			sum += va_arg(argues, int);
	}
	return (sum);
}
