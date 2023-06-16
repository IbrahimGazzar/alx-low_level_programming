#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the last digit of a random number n
 *
 * Return: always zero
 */
int main(void)
{
	int n;
	int last;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	printf("The last digit %d is ", n);
       	if (last > 5)
		printf("%d is greater than 5\n", last);
	else if (last < 6)
		printf("%d is less than 6 and not 0\n", last);
	else
		printf("%d and is 0\n", last);
	return (0);
}
