#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that computes the sum of multiples of 3 and 5 below 1024
 *
 * Return: always 0
 */

int main(void)
{
	int sum;
	int i3;
	int i5;

	sum = 0;
	for (i3 = 3; i3 < 1024; i3+3)
		sum += i3;
	for (i5 = 5; i5 < 1024; i5+5)
	{
		if (i5 % 3 != 0)
			sum += i5;
	}
	printf("%d\n", sum);
	return (0);
}
