#include "main.h"

/**
 * puts2 - prints the first character then every 2 characters after that
 * @str: String to be printed
 *
 * Return: no return value
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
