#include "main.h"

/**
 * main - prints multiple of 3 as fizz, 5 as buzz and both as fizzbuzz
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 15) == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if ((n % 3) == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if ((n % 5) == 0)
		{
			printf("Buzz");
			if  (n != 100)
				printf(" ");
		}
		else
		{
		printf("%d ", n);
		}
	}
	printf("\n");
	return (0);
}
