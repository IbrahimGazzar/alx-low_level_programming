#include "main.h"

/**
 * _isalpha: checks if a character is an alphabetic letter or not
 * @c: character to be checked
 *
 * Return: 1 if it's alphabetic, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
