#include "main.h"

/**
 * print_binary - prints in binary
 * @n: Decimal number
 *
 * Description: A function that converts decimal to binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int index, count = 0;
	unsigned long int temp;

	for (index = 63; index >= 0; index--)
	{
		temp = n >> index;

		if (temp & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}

	if (!count)
	{
		_putchar('0');
	}
}
