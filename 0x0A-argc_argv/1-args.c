#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: counts arguments
 * @argv: pointer to array of arguments
 *
 * Return: 0 - success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));
	return (0);
}
