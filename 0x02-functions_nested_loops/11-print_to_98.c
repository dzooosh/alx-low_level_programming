#include <stdio.h>

/**
 * print_to_98 - increase lower or reduce higher numbers to 98
 * @n: the inputed number
 *
 * Return: list of numbers till it reaches 98
 */

void print_to_98(int n)
{
	if (n == 98)
		printf("%d\n", n);
	while (n != 98)
	{
		if (n > 98)
		{
			printf("%d, ", n--);
			if (n == 98)
				printf("%d\n", n);
		}
		else
		{
			printf("%d, ", n++);
			if (n == 98)
				printf("%d\n", n);
		}
	}
}
