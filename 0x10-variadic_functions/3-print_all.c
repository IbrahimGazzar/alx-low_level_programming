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

	clean = clean_format(format);
	i = 0;
	va_start(argues, format);
	while (clean[i] != '\0')
	{
		switch (clean[i])
		{
			case 'c':
				printf("%c%s", va_arg(argues, int), print_help(clean, i));
				break;
			case 'i':
				printf("%d%s", va_arg(argues, int), print_help(clean, i));
				break;
			case 'f':
				printf("%f%s", (float)va_arg(argues, double), print_help(clean, i));
				break;
			case 's':
				ss = va_arg(argues, char*);
				if (ss == NULL)
				{
					printf("(nil)%s", print_help(clean, i));
					break;
				}
				printf("%s%s", ss, print_help(clean, i));
				break;
		}
		i++;
	}
	va_end(argues);
	printf("\n");
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
/**
 * clean_format - clean a given format from unused characters
 * @format: format to be cleaned
 *
 * Return: format after cleaning
 */
char *clean_format(const char * const format)
{
	char *clean;
	int i;
	int j;

	i = 0;
	j = 0;
	clean = malloc(sizeof(char) * (strlen(format) + 1));
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
			case 'i':
			case 'f':
			case 's':
				clean[j++] = format[i];
				break;
			default:
				break;
		}
		i++;
	}
	clean[j] = '\0';
	return (clean);
}
