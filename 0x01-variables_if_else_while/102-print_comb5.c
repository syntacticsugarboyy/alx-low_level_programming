#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints all possible
 *		combinations of two two-digit numbers
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (l = k + 1; l <= '9'; l ++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
						putchar(',');
						putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
