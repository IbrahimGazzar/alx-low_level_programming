#include "main.h"

/**
 * strchr - finds the first occurence of a character in a given string
 * @s: string to be searched into
 * @c: character to be looked for
 *
 * Return: pointer to first occurence of c if it exists, NULL otherwise
 */

char *_strchr(char *s, char c)
{
	char *news;

	news = NULL;
	while (*s != '\0')
	{
		if (*s == c)
		{
			news = s;
			break;
		}
		s++;
	}
	return (news);
}
