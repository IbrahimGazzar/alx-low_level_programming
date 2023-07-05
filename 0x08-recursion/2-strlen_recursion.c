#include "main.h"

/**
 * _strlen_recursion - Calculate the length of a string recursively
 * @s: pointer at the beginning of string
 *
 * Return: length of string s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));
}
