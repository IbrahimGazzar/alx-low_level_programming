#include <stdio.h>

void putputchar(void);
/**
 * main - print "_putchar"
 *
 * Return: always 0
 */

int main(void)
{
	putputchar();
	return (0);
}
/**
 * putputchar - print "_putchar"
 *
 * Return: no return value
 */
void putputchar(void)
{
	putchar('_');
	putchar('p');
	putchar('u');
	putchar('t');
	putchar('c');
	putchar('h');
	putchar('a');
	putchar('r');
	putchar('\n');
}

