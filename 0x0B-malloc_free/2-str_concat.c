#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to concatenated string s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, a, k;
	char *pt;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	pt = malloc(sizeof(char) * (i + j + 1));

	if (pt == NULL)
	{
		free(pt);
		return (NULL);
	}
	for (a = 0; a < i; a++)
		pt[a] = s1[a];
	for (k = 0; k <= j; k++, a++)
		pt[a] = s2[k];
	return (pt);
}
