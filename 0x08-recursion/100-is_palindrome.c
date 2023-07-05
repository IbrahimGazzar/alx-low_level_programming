#include "main.h"

/**
 * is_palindrome - checks if a given string is palindrome
 * @s: pointer at start of the string
 *
 * Return: 1 if s is palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	char *smirror;

	if (*s == '\0')
		return (0);
	smirror = s;
	smirror = point_mov(smirror);
	return(palin_help(s, --smirror));
}
/**
 * palin_help - checks the individual characters of the string
 * @s_1: pointer at the start of the string
 * @s_2: pointer at the end of the string
 *
 * Return: 1 if s is palindrome, 0 otherwise
 */

int palin_help(char *s_1, char *s_2)
{
	if (s_1 >= s_2)
		return (1);
	if (*s_1 != *s_2)
		return (0);
	return (palin_help(++s_1, --s_2));
}
/**
 * point_mov - moves a pointer to the end of the string
 * @smirror: pointer to be moved
 *
 * Return: The updated pointer
 */

char *point_mov(char *smirror)
{
	if(*smirror == '\0')
		return (--smirror);
	return (point_mov(++smirror));
}
