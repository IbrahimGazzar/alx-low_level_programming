#include <stdio.h>
/**
 * main - Print size of all types
 *
 * Return: Always return 0
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n",sizeof(int));
	printf("Size of an int: %d byte(s)",sizeof(int));
	printf("Size of a long int: %d byte(s)",sizeof(long int));
	printf("Size of a long long int: %d byte(s)",sizeof(long long int));
	printf("Size of a float: %d byte(s)",sizeof(float));
	return (0);
}
