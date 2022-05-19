#include "main.h"
#include <stdlib.h>

/**
 * _strdup - creates duplicate of string
 * @str: inputed string
 *
 * Return: pointer of the duplicate string
 */

char *_strdup(char *str)
{
	unsigned int i = 0, j;
	char *pt;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	pt = malloc(sizeof(*str) * (i + 1));
	for (j = 0; j <= i; j++)
		pt[j] = str[j];
	if (pt == NULL)
		return (NULL);
	return (pt);
}
