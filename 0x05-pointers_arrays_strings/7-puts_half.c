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

	length = 0;
	for (i = 0; str[i] != '\0'; i++)
		length++;
	for (i = (length / 2) + 1; i <= length; i++)
		_putchar(str[i]);
	_putchar('\n');		
}
