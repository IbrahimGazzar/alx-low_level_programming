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
		ch = *ptr;
		ch += '4' * (ch == 'a' || ch == 'A');
		ch += '3' * (ch == 'e' || ch == 'E');
		ch += '0' * (ch == 'o' || ch == 'O');
		ch += '7' * (ch == 't' || ch == 'T');
		ch += '1' * (ch == 'l' || ch == 'L');
		if (ch != 0)
			*str = ch;
		str++;
	}
	return (newstr);
}
