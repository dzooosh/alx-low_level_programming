#include "main.h"

/**
 * times_table - printing the 9times table
 *
 * Return: 9 times tables
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 9)
				_putchar((i * j) + '0');
			_putchar((i * j) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

