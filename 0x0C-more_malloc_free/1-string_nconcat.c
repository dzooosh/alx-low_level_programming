#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pt;
	unsigned int mem1 = 0, mem2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[mem1] != '\0')
	{
		mem1++;
	}

	while (s2[mem2] != '\0')
	{
		mem2++;
	}

	if (n > mem2)
	n = mem2;
	pt = malloc((mem1 + n + 1) * sizeof(char));

	if (pt == NULL)
		return (0);

	for (i = 0; i < mem1; i++)
	{
		pt[i] = s1[i];
	}

	for (; i < (mem1 + n); i++)
	{
		pt[i] = s2[i - mem1];
	}
	pt[i] = '\0';

return (pt);
}
