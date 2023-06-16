#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print all 10 digits
 *
 * Return: always 0
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
