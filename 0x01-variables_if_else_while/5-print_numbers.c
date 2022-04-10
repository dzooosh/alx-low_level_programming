#include <stdio.h>

/**
 * main - prints all single digits numbers of base 10
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
