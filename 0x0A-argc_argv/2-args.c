#include <stdio.h>

/**
 * main - prints each arguments followed by a new line
 * @argc: counts the arguments
 * @argv: array that stores arguments
 *
 * Return: 0 - success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
