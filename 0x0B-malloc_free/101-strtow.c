#include "main.h"
#include <stdlib.h>

/**
 * _free_grid - frees a 2d array
 * @grid: multidimensional array
 * @height: height of array
 *
 * Return: Nothing
 */

void _free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splitting a string into different words
 * @str: string
 *
 * Return: pointer of an array of strings
 */
char **strtow(char *str)
{
	char **pt;
	unsigned int c, height, i, j, k;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	pt = malloc((height + 1) * sizeof(char *));
	if (pt == NULL || height == 0)
	{
		free(pt);
		return (NULL);
	}
	for (i = k = 0; i < height; i++)
	{
		for (c = k; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				k++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				pt[i] = malloc((c - k + 2) * sizeof(char));
				if (pt[i] == NULL)
				{
					_free_grid(pt, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; k <= c; k++, j++)
			pt[i][j] = str[k];
		pt[i][j] = '\0';
	}
	pt[i] = NULL;
	return (pt);
}
