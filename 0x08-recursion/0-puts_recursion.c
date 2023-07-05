#include "main.h"

/**
 * _puts_recursion - uses the function _putchar recursively to print a string
 * @s: pointer at the start of the string to be printed
 *
 * Return: no return value
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	_puts_recursion(++s);
}
