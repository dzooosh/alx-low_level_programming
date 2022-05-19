#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of char
 * @size: amount of times to print c
 * @c: value to be printed based on size
 *
 * Return: pointer of array of chars
 *	NULL if nothing is size = 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *cr;

	if (size == 0)
		return (NULL);
	cr = malloc(sizeof(c) * size);
	if (cr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		cr[i] = c;
	return (cr);
}
