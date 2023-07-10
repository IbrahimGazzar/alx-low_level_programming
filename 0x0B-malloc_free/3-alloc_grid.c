#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - create a 2d int array
 * @width: width of the array
 * @height: height of the array
 *
 * Return: the new array
 */

int **alloc_grid(int width, int height)
{
	int **big_arr;
	int i;
	int j;

	if (width < 1 || height < 1)
		return (NULL);
	big_arr = malloc(sizeof(int *) * height);
	if (big_arr == NULL)
	{
		free(big_arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		big_arr[i] = malloc(sizeof(int) * width);
		if (big_arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(big_arr[j]);
			free(big_arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			big_arr[i][j] = 0;
	}
	return (big_arr);
}
