#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of char
 * @size: amount of times to print c
 * @c: value to be printed based on size
 *
 * Return: NULL if nothing is size = 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
		return (NULL);
	char *ptr = malloc(sizeof(c) * size);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
