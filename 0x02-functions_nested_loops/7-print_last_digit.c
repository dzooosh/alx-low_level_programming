#include "main.h"

/**
 * print_last_digit - prints last digit of any numbet
 * @c: the inputed value
 *
 * Return: The last digit
 */

int print_last_digit(int c)
{
	int last = c % 10;

	if (last < 0)
	{
		last *= -1;
	}
	_putchar(last + '0');

	return (last);
}
