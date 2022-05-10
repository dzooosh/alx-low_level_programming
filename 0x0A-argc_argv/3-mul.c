#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of 2 integer
 * @argc: counts the arguments
 * @argv: stores arguments in array
 *
 * Return: 0 - success
 */

int main(int argc, char *argv[])
{
	int total;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		total = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", total);
	}
	return (0);
}
