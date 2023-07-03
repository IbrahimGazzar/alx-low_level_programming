#include "main.h"

/**
 * set_string - sets the value of a pointer to a character
 * @s: the pointer to be set
 * @to: pointer at string s will point at
 *
 * Return: no return value
 */

void set_string(char **s, char *to)
{
	*s = to;
}
