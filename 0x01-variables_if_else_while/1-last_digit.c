#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * last_digit - determines last number n%10
 * n - random number generation
 *
 * Return: number greater than 5, less than 6 or equals 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit = n%10;

	if (last_digit>5)
		printf("Last digit of %i is %i and is greater than 5\n", (n,last_digit));
	else if (last_digit<6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", (n, last_digit));
	else if (last_digit==0)
		printf("Last digit of %i is %i and is 0\n", n, last_digit);
	return (0);
}
