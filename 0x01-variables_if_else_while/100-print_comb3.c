#include <stdio.h>

/**
 * main - prints all two digit number combinations
 * No repitition of numbers e.g 32 and 23
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n = 48;

	while (n < 58)
	{
		int s = 48;

		while (s < 58)
		{
			if (n != s && n < s)
			{
				putchar(n);
				putchar(s);
				if (n == 56 && s == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			s++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
