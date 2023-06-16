#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the entire lowercase alphabet
 *
 * Return: always 0
 */
int main(void)
{
	char c;
	
	for (c = 'a'; c > 'A'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
