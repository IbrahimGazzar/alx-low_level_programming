#include "main.h"

/**
 * leet - encodes a string into 1337 or 'leet'
 * @str: string to be encoded
 *
 * Return: encoded string
 */

char *leet(char *str)
{
	char *newstr;

	newstr = str;
	while (*str != '\0')
	{
		if (*str == 'a' || *str == 'A')
			*str = '4';
		else if (*str == 'e' || *str == 'E')
			*str = '3';
		else if (*str == 'o' || *str == 'O')
			*str = '0';
		else if (*str == 't' || *str == 'T')
			*str = '7';
		else if (*str == 'l' || *str == 'L')
			*str = '1';
	}
	return (newstr);
}
