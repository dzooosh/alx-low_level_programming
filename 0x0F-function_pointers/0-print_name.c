#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name to be printed
 * @f: callback function that prints name
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
	(*f)(name);
}
