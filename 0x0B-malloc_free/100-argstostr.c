#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments in the program
 * @ac: number of arguments
 * @av: vector
 *
 * Return: pointer of an array of char
 */

char *argstostr(int ac, char **av)
{
	char *pt;
	int i, j, k, ia;

	if (ac == 0)
		return (NULL);

	for (k = j = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	pt = malloc((c + 1) * sizeof(char));

	if (pt == NULL)
	{
		free(pt);
		return (NULL);
	}
	for (i = j = ia = 0; ia < k; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			pt[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			pt[ia] = av[i][j];
	}
	pt[ia] = '\0';

	return (pt);
}
