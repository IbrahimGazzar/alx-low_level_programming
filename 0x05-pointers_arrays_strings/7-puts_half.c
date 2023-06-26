#include "main.h"

/**
 * puts_half - print one half of the given string
 * @str: string to be printed
 *
 * Return: no return value
 */

void puts_half(char *str)
{
	int i;
	int length;
	int x;
	
	length = 0;
	for (i = 0; str[i] != '\0'; i++)
		length++;
	if (length / 2 != length - (length / 2))
		x = length / 2 + 1;
	else
		x = length / 2;
	for (i; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
