#include "main.h"

/**
 * cap_string - capitalize the first letter in each string
 * @str: string to be edited
 *
 * Return: the edited string
 */

char *cap_string(char *str)
{
	char *newstr;
	int i;
	int ip;

	newstr = str;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z' && i == 0)
			str[i] -= 32;
		if (str[i] >= 'a' && str[i] <= 'z' && i > 0)
		{
			ip = i - 1;
			if (str[ip] == ' ' || str[ip] == '\t' || str[ip] == '\n')
				str[i] -= 32;
			else if (str[ip] == ';' || str[ip] == '.' || str[ip] == '!')
				str[i] -= 32;
			else if (str[ip] == '"' || str[ip] == '(' || str[ip] == ')')
				str[i] -= 32;
			else if (str[ip] == '}' || str[ip] == '{' || str[ip] == '?')
				str[i] -= 32;
			else if (str[ip] == ',')
				str[i] -= 32;
		}
	}
	return (newstr);
}
