#include <stdio.h>
#include <stdlib.h>

/**
 * main - print numbers from 1 to 100, and FizzBuzz
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d", i);
		}
		else
		{
			if (i % 3 == 0)
				printf("Fizz");
			if (i % 5 == 0)
				printf("Buzz");
		}
		if (i < 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
