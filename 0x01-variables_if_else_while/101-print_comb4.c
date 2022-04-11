#include <stdio.h>

/**
 * main - prints all two digit number combinations
 * No repitition of numbers e.g 32 and 23
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int c;
	int s;

	for (i = 48; i < 58; i++)
	{
		for (c = 48; c < 58; c++)
		{
			for (s = 48; s < 58; s++)
			{
				if (i != c && c != s && i < c && c < s)
				{
					putchar(i);
					putchar(c);
					putchar(s);
					if (i == 55 && c == 56 && s == 57)
						break;
				printf(",");
				printf(" ");
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
