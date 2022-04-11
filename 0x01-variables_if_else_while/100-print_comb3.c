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

	for (n = 0; n <= 9; n++)
	{
		for (s = 1; s <= 9; s++)
		{
			if (n != s)
			{
				putchar(n);
				putchar(s);
			}
		}
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
