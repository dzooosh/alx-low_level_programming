#include "main.h"

/**
 * print_sign - printing the sign of a number
 * @n: inputed number
 *
 * Return: 1 and +above zero, 0 equals zero, -1 less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
