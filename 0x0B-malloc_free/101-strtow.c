#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <ctype.h>

/**
 * strtow - converts a string into an array of words
 * @str: string to be divided
 *
 * Return: array containing the resulting strings
 */

char **strtow(char *str)
{
	char **starr;
	int i;
	int count;
	int is_word;

	if (str == NULL || strcmp(str, "") == 0)
		return (NULL);
	is_word = 0;
	count = word_counter(str);
	if (count < 1)
		return (NULL);
	starr = word_length(str, count);
	if (starr == NULL)
		return (NULL);
	while (isspace(*str) != 0)
		str++;
	i = 0;
	is_word = 0;
	while (*str != '\0')
	{
		if (isspace(*str))
		{
			if (is_word)
			{
				is_word = 0;
				*(starr[i]) = '\0';
				i++;
			}
		}
		else if (is_word == 0)
		{
			is_word = 1;
			*(starr[i]) = *str;
		}
		(starr[i])++;
		str++;
	}
	*(starr[i]) = '\0';
	return (starr);
}
/**
 * word_counter - counts words in a given string
 * @str: string to be counted
 *
 * Return: number of words in str
 */
int word_counter(char *str)
{
	char *strr;
	int count;
	int is_word;

	strr = str;
	count = 0;
	is_word = 0;
	while (*strr != '\0')
	{
		if (isspace(*strr))
		{
			is_word = 0;
		}
		else if (!is_word)
		{
			is_word = 1;
			count++;
		}
		strr++;
	}
	return (count);
}
/**
 * word_length - calculates the length of words
 * @str: string containing the words
 * @count: number of letters in sentence
 *
 * Return: the updated starr array
 */
char **word_length(char *str, int count)
{
	char **starr;
	int *wordlen;
	char *strr;
	int i;
	int j;

	i = 0;
	strr = str;
	starr = malloc(sizeof(char *) * count);
	if (starr == NULL)
		return (NULL);
	wordlen = malloc(sizeof(int) * count);
	for (i = 0; i < count; i++)
		wordlen[i] = 0;
	while (*strr != '\0')
	{
		if (isspace(*strr))
		{
			if (wordlen[i] > 0)
			{
				starr[i] = malloc(sizeof(char) * (wordlen[i] + 1));
				if (starr[i] == NULL)
				{
					for (j = 0; j <= i; j++)
						free(starr[j]);
					free(starr);
					return (NULL);
				}
				i++;
			}
		}
		else
		{
			wordlen[i]++;
		}
		strr++;
	}
	return (starr);
}
