#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints all possible
 *		combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int k;

	for (i = 0; i <= 99; i++)
	{
		for (k = i + 1; k <= 99; k++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(k / 10 + '0');
			putchar(k % 10 + '0');

			if (i != 98 || k != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
