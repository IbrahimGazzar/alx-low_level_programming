#include "main.h"

/**
 * string_toupper - turn all lowercase to uppercase
 * @str: string to be turned
 *
 * Return: string after modification
 */

char *string_toupper(char *str)
{
	char *newstr;

	newstr = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return (newstr);
}
