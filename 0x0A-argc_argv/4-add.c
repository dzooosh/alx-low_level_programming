#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns addition of positive aeguments
 * @argc: counts arguments
 * @argv: array of arguments
 *
 * Return: 0 - success
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc > 1)
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
		{
			for (i = 1; i < argc; i++)
			{
				sum = sum + atoi(argv[i]);
			}
			return (sum);
		}
		else
			printf("Error\n");
			return (1);
	}
	else
		printf("0\n");
	return (0);
}
