#include <stdio.h>

/**
 * main - prints alphabets in lowercase
 *
 *
 * Return: Always (0) success/complete
 *
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);

}
