#include "main.h"

/**
 * print_to_98 - prints to 98
 * @n: input integer
 *
 * Description: A function thatprints numbers to 98
 *
 * Return: void
 */

void print_to_98(int n)
{
	int great;
	int small;

	if (n < 98)
	{
		for (small = n; small <= 98; small++)
		{
			if (small < 0)
			{
				small *= -1;
			}

			else
			{
				if ((small / 10) == 0)
				{
					_putchar(small + '0');
				}

				else
				{
					_putchar((small / 10) + '0');
					_putchar((small % 10) + '0'); 
				}
			}

			if (small != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

	else if (n > 98)
	{
		for (great = n; great >= 98; great--)
		{
			if ((great / 10) == 0)
			{
				_putchar(great + '0');
			}
			else
			{
				_putchar((great / 10) + '0');
				_putchar((great % 10) + '0');
			}
			if (great != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	
	else
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar('\n');
	}
}
