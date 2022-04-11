#include <stdio.h>

/**
 * main - prints all two digit number combinations
 * No repitition of numbers e.g 32 and 23
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int s;

	for (n = 48; n <= 57; n++)
	{
		for (s = 48; s <= 57; s++)
		{
			if (n != s)
			{
				putchar(n);
				putchar(s);
			}
		}
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
