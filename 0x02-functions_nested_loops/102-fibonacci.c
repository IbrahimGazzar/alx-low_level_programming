#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints the first 50 numbers in the fibonacci series
 *
 * Return: always 0
 */

int main(void)
{
	long int fib1;
	long int fib2;
	long int temp;
	int i;

	fib1 = 0;
	fib2 = 1;
	for (i = 0; i < 50; i++)
	{
		temp = fib1;
		fib1 = fib2;
		fib2 = temp + fib1;
		printf("%d, ", fib2);
	}
	putchar('\n');
	return (0);
}
