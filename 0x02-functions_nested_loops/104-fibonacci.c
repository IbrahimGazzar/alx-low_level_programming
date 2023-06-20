#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints the first 98 numbers in the fibonacci series
 *
 * Return: always 0
 */

int main(void)
{
	long int fib1;
	long int fib2;
	long int temp;
	int i;

	fib1 = 1;
	fib2 = 2;
	for (i = 0; i < 98; i++)
	{
		temp = fib1;
		fib1 = fib2;
		fib2 = temp + fib1;
		printf("%ld", fib2);
		if (i < 97)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
