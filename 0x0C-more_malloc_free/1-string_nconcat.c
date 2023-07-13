#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concats the first specified chars in a string to another
 * @s1: first string
 * @s2: second string
 * @n: numbers of chars added from s2 to s1
 *
 * Return: the new concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *news;
	char *newss;
	int length;
	int s1len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > strlen(s2))
		n = strlen(s2);
	s1len = strlen(s1);
	length = s1len + n + 1;
	news = malloc(sizeof(char) * length);
	if (news == NULL)
		return (NULL);
	news = strcpy(news, s1);
	newss = strncpy((news + s1len), s2, n);
	newss++;
	news[length - 1] = '\0';
	return (news);
}
