#include "main.h"

/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: input string to search for matching character
 * @accept: characters that could be matched
 *
 * Return: pointer to matching character
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				goto exit;
		}
	}

exit: return (s[i] != '\0' ? s + i : '\0');
}
