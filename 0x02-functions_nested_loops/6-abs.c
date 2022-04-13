#include "main.h"

/**
 * _abs - absolute value of inputed value
 * @c: inputed int value
 *
 * Return: returns absolute number of inputed value
 */

int _abs(int c)
{
	if (c >= 0)
		return (c);
	else
		return (c / -1);
}
