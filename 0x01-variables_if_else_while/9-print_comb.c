#include <stdio.h>

/**
 * main - Printing all possible combination of single digit numbers
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n != 57)
		{
			putchar(n);
			putchar(', ');
		}
		else
		{
			putchar(n);
			putchar('\n');
		}
	}
	return (0);
}
