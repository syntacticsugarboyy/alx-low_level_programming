#include "main.h"

/**
 * times_table - table of times
 *
 * Description: A function that prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int num;
	int loop;
	int mul;

	for (num = 0; num <= 9; num++)
	{
		for (loop = 0; loop <= 9; loop++)
		{
			mul = num * loop;

			if (num == 0 && loop == 0)
				{
					putchar(mul + '0');
				}

			else if (mul > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((mul % 10) + '0');

			}

			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
		}
		putchar('\n');
	}
}
