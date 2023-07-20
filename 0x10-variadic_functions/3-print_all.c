#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

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

	i = 0;
	va_start(argues, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(argues, int));
				break;
			case 'i':
				printf("%d", va_arg(argues, int));
				break;
			case 'f':
				printf("%f", va_arg(argues, double));
				break;
			case 's':
				ss = va_arg(argues, char*);
				if (ss == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", ss);
				break;
			default:
				break;
		}
		if ((size_t)i < strlen(format) - 1)
			printf(", ");
		i++;
	}
	putchar('\n');
}
