#include <stdio.h>

/**
 * main - prints all two digit number combinations
 * No repitition of numbers e.g 32 and 23
 *
 * Return: Always 0 (success)
 */

int main(void)
{
        int i;
        int c;

        for (i = 48; i < 58; i++)
        {
                for (c = 48; c < 58; c++)
                {
                        if (i != c && i < c)
                        {
                                putchar(i);
                                putchar(c);
                                if (i == 56 && c == 57)
                                        break;
                                printf(",");
                                printf(" ");
                        }
                }
        }
        putchar('\n');
        return (0);
}
