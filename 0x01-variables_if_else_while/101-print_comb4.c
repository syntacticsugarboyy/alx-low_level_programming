#include <stdio.h>

/**
 * main - Entry point
 * Description: A progrem that prints combination of digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (i != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
