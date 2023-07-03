#include "main.h"
#include <stddef.h>

/**
 * _strstr - finds a substring in a larger string
 * @haystack: the larger string
 * @needle: the substring
 *
 * Return: pointer at the beginning of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *hay;
	char *nee;

	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0')
	{
		hay = haystack;
		nee = needle;
		if (*haystack == *nee)
		{
			while (*nee != '\0')
			{
				if (*hay != *nee)
					break;
				hay++;
				nee++;
			}
			if (*nee == '\0')
				return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
