#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets
 * Description: printing all alphabets in lowercase in 10 different lines
 *
 * Return: all alphabets 10 rows
 */

void print_alphabet_x10(void)
{
	int n;
	char c;

	for (n = 0; n < 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
