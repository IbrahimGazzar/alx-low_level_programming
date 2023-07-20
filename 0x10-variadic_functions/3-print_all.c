#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_all - prints given variables in given formats
 * @format: string containing formats of given variables
 * @...: variables to be printed
 *
 * Return: no return value
 */

void print_all(const char * const format, ...)
{
	va_list argues;
	int i;
	char *ss;
	char *clean;
	int j;

	j = 0;
	i = 0;
	clean = malloc(sizeof(char) * (strlen(format) + 1));
	while (format[i] != '\0')
	{
		if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
			clean[j++] = format[i];
		i++;
	}
	clean[j] = '\0';
	i = 0;
	va_start(argues, format);
	while (clean[i] != '\0')
	{
		switch(clean[i])
		{
			case 'c':
				printf("%c%s", va_arg(argues, int), (const char*)print_help(clean, i));
				break;
			case 'i':
				printf("%d%s", va_arg(argues, int), (const char*)print_help(clean, i));
				break;
			case 'f':
				printf("%f%s", va_arg(argues, double), (const char*)print_help(clean, i));
				break;
			case 's':
				ss = va_arg(argues, char*);
				if (ss == NULL)
				{
					printf("(nil)%s", (const char*)print_help(clean, i));
					break;
				}
				printf("%s%s", ss, (const char*)print_help(clean, i));
				break;
		}
		i++;
	}
	putchar('\n');
}
/**
 * print_help - helps by formatting the text to be printed
 * @format: format string
 * @i: current position in the string
 *
 * Return: ", " if i isn't the last element, empty string otherwise
 */
char *print_help(const char * const format, int i)
{
	char *help;

	help = "";
	if ((size_t)i < strlen(format) - 1)
		help = ", ";
	return (help);
}
