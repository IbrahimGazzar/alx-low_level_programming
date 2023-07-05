#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: pointer at the start of the first string
 * @s2: pointer at the start of the second string
 *
 * Return: 1 if s1 and s2 are identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '0');
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return (1);
		return (wildcmp(s1, s2 + 1));
	}
	if (*s1 == *s2 && *s1 != '\0')
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
