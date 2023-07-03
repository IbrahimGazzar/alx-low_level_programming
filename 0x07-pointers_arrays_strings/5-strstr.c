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

	while (*haystack != '\0')
	{
		nee = needle;
		if (*haystack == *nee)
		{
			hay = haystack;
			while (*nee != '\0')
			{
				if (*hay != *nee)
					break;
				hay++;
				nee++;
			}
			if (nee == '\0')
				return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
