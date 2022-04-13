#include "main.h"

/**
 * times_table - printing the 9times table
 *
 * Return: 9 times tables
 */

void times_table(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (j == 57)
				_putchar(i * j);
			_putchar(i * j);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

