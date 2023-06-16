#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the entire lowercase alphabet except q and e
 *
 * Return: always 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
