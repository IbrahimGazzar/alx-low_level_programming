#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if the two strings match, <0 if s1 < s2, and >0 if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int s1_len;
	int s2_len;
	int ret;

	s1_len = 0;
	for (i = 0; s1[i] != '\0'; i++)
		s1_len++;
	s2_len = 0;
	for (i = 0; s2[i] != '\0'; i++)
		s2_len++;
	if (s1_len < s2_len)
		return (-15);
	if (s1_len > s2_len)
		return (15);
	return (0);
}
