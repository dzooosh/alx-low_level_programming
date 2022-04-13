#include "main.h"

/**
 * print_alphabet -  pints alphabets in lowercase
 *
 * return: alphabets
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
