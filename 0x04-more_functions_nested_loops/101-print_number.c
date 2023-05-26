#include "main.h"

/**
 * print_number - prints a number
 * @n: number to print
 *
 * Description: A function that prints an integer
 *
 * Return: void
 */

void print_number(int n)
{
	if (n > 0)
	{
		if (n > 9)
		{
			_putchar((n / 10) + '0');
		}
			_putchar((n % 10) + '0');
	}

	else if (n < 0)
	{
		n *= -1;

		_putchar('-');

		if (n > 9)
		{
			_putchar((n / 10) + '0');
		}
			_putchar((n % 10) + '0');
	}

	else
	{
		_putchar('0');
	}

	_putchar('\n');
}
