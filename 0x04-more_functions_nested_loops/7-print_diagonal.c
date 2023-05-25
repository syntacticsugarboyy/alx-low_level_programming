#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: number of diagonals
 *
 * Description: A function that draws a diagonal line
 *
 * Return: Void
 */

void print_diagonal(int n)
{
	int diag;
	int onal;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (diag = 1; diag <= n; diag++)
		{
			for (onal = 1; onal <= n; onal++)
			{
				if (onal <= diag)
				{
					if (onal == diag)
					{
						_putchar('\\');
					}

					else
					{
						_putchar(' ');
					}
				}

				else
				{
					if (onal == n)
					{
						_putchar('\n');
					}
				}
			}
		}
		_putchar('\n');
	}
}
