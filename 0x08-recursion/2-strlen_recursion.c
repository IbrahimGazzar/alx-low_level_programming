#include "main.h"

/**
 * _strlen_recursion - Calculate the length of a string recursively
 * @s: pointer at the beginning of string
 *
 * Return: length of string s
 */

int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s == '\0')
		return (len);
	len ++;
	return (len + _strlen_recursion(++s));
}
