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
	int **pt;
	int i, j;

	if (width <= 0 || height <= 0) /* if paras are less than 1, return null */
		return (NULL);

	pt = malloc(sizeof(int *) * height);

	if (pt == NULL) /* if pointer is null return null */
	{
		free(pt);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		pt[i] = malloc(width * sizeof(int));
		if (pt[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(pt[i]);
			free(pt);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			pt[i][j] = 0; /* initialization with 0 */
	return (pt);
}
