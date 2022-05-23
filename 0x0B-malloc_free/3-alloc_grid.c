#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates pointer to 2 dimensional array
 * @width: length of the array
 * @height: height of the array
 *
 * Return: pointer to 2d array of integers
 */

int **alloc_grid(int width, int height)
{
	int *pt;
	
	width, height = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	*pt = malloc(sizeof(int) * width * height);

	if (*pt == NULL)
		return (NULL);
	free(*pt);
	return (*pt);
}
