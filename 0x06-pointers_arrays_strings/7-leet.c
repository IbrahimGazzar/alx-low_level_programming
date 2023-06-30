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
	char ch;

	newstr = str;
	while (*str != '\0')
	{
		ch = *str;
		ch = '4' * (ch == 'a' || ch == 'A') +
		'3' * (ch == 'e' || ch == 'E') +
		'0' * (ch == 'o' || ch == 'O') +
		'7' * (ch == 't' || ch == 'T') +
		'1' * (ch == 'l' || ch == 'L');
		if (ch != 0)
			*str = ch;
		str++;
	}
	return (newstr);
}
