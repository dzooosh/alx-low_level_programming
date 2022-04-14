#include "main.h"

/**
 * _isupper - checks if input is in uppercase or not
 * @c: inputed value
 *
 * Return: 1 uppercase and 0 for otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

