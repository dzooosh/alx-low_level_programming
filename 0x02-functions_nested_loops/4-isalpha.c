#include "main.h"

/**
 * _isalpha - function to check if input is a letter
 * @c: inputed value to check
 *
 * Return: returns 1 for true and 0 for false
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
