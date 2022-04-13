#include <unistd.h>

/**
 * _putchar: prints to the stdout
 * @c - character to print
 * return: success 1
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
