#include <stdio.h>

/**
 * main - prints all alphabets except q and e
 *
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
		ch++;
	}
	putchar('\n');

}
