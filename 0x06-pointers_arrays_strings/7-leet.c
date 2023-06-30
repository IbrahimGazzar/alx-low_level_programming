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
		if (*str == 'e' || *str == 'E')
			*str = '3';
		if (*str == 'o' || *str == 'O')
			*str = '0';
		if (*str == 't' || *str == 'T')
			*str = '7';
		if (*str == 'l' || *str == 'L')
			*str = '1';
		str++;
	}
	return (newstr);
}
