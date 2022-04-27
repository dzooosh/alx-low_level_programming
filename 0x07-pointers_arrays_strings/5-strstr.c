#include "main.h"

/**
 * *_strstr - function that locates a substring
 *
 * @haystack: string to find substring from
 * @needle: substring to find match
 *
 * Return: pointer to first character of matching substring
 */

char *_strstr(char *haystack, char *needle)
{
	int k;

	while (*haystack != '\0')
	{
		k = 0;
		while (*haystack == *needle && *haystack != '\0' && *needle !=
				 '\0')
			haystack++, needle++, k++;
		if (*needle == '\0')
			return (haystack - k);
		haystack -= (k - 1), needle -= k;
	}

	return ('\0');
}
