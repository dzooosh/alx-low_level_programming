#include "main.h"

/**
 * _islower - confirms lowercase
 * @c: inputed value
 *
 * Description: takes the int or letter input based on ascii value
 *
 *
 * Return: 1 for success and 0 for otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
