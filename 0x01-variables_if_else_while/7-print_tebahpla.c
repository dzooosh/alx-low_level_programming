#include <stdio.h>

/**
 * main - prints alphabets in lowercase in reverse
 *
 *
 * Return: Always 0 (success/complete)
 *
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch <= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);

}
