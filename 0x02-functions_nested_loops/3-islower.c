#include "main.h"

/**
 * _islower - checks if a character is lowercase or not
 * c: input character to be checked
 * Return: 1 if input is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
