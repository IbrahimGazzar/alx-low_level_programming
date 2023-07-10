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
	int w;

	if (width < 1 || height < 1)
		return (NULL);
	big_arr = malloc(sizeof(int) * width * height);
	if (big_arr == NULL)
		return (NULL);
	while (--height)
	{
		w = width;
		while (--w)
			big_arr[height][w] = 0;
	}
	return (big_arr);
}
