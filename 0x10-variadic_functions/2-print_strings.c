#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - print given strings
 * @separator: separator between strings
 * @n: number of strings to be printed
 * @...: strings to be printed
 *
 * Return: no return value
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argues;
	unsigned int i;
	char *ss;

	if (n < 1)
	{
		putchar('\n');
		return;
	}
	va_start(argues, n);
	for (i = 0; i < n; i++)
	{
		ss = va_arg(argues, char*);
		if (ss != NULL)
			printf("%s", ss);
		else
			printf("(nil)");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
