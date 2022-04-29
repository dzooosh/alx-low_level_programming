#include "main.h"

/**
 * sqrt2 - this function makes it possible to evaluate from 1 to n
 *
 * @a: same number as n
 * @b: number that iterate from 1 to n.
 *
 * Return: 1 on success
 */

int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: integer
 *
 * Return: 1 on success
 */

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
