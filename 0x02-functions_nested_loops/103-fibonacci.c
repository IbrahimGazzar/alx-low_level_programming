#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints the sum of even fibonacci numbers
 *
 * Return: always 0
 */

int main(void)
{
	long int fib1;
	long int fib2;
	long int temp;
	long int sum;

	fib1 = 0;
	sum = 0;
	for (fib2 = 1; fib2 < 4000000;)
	{
		temp = fib1;
		fib1 = fib2;
		fib2 = temp + fib1;
		if (fib2 % 2 == 0)
			sum += fib2;
	}
	printf("%ld\n", sum);
	return (0);
}
