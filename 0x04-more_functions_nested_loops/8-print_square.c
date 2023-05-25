#include "main.h"

/**
 * print_square - prints a square
 * @size: length of the square
 *
 * Description: A function that prints a square
 *
 * Return: void
 */

void print_square(int size)
{
	int len;
	int bre;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (bre = 1; bre <= size; bre++)
		{
			for (len = 1; len <= size; len++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
