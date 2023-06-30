#include "main.h"

/**
 * rot13 - rotate latin letters in a string by 13
 * @str: string to be encoded
 *
 * Return: encoded string
 */

char *rot13(char *str)
{
	char *newstr;
	char ch;

	newstr = str;
	while (*str != '\0')
	{
		ch = *str;
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
		{
			ch = *str +
			13 * ((*str >= 'A' && *str < 'N') || (*str >= 'a' && *str < 'n')) -
			13 * (*str > 'M' && *str <= 'Z') || (*str > 'm' && *str <= 'z');
			*str = ch;
		} 
		str++;
	}
	return (newstr);
}
