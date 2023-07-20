#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - print given numbers
 * @separator: separator between numbers
 * @n: number of numbers to be printed
 * @...: numbers to be printed
 *
 * Return: no return value
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argues;
	unsigned int i;

	if (n < 1)
		return;
	if (separator == NULL)
		separator = "";
	va_start(argues, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(argues, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
