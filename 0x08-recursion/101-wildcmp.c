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
	if (*s1 == '\0')
		return (*s2 == '\0' || *s2 == '*');
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0' || wildcmp(s1, s2 + 1))
			return (1);
	}
	return (0);
}
/**
 * astreisk_tst - called for special cases of *
 * @s1: pointer of the first string
 * @s2: pointer of the second string
 *
 * Return: 1 if s1 and s2 are identical, 0 otherwise
 */
int astreisk_tst(char *s1, char *s2)
{
	if (*s1 == '\0')
		return (wildcmp(s1, s2 + 1));
	if (wildcmp(s1, s2 + 1))
		return (1);
	else
		return (astreisk_tst(++s1, s2));
	return (0);
}
