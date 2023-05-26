#include "main.h"

/**
 * print_triangle - prints triangles
 * @size: breadth and height of the triangle
 *
 * Description: A function that prints a triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int heit;
	int bret;
	int hash;
	int red;

	red = size -1;

	if (size <= '0')
	{
		_putchar('\n');
	}

	else
	{
		for (heit = 1; heit <= size; heit++)
		{
			for (bret = red; bret >= 1; bret--)
			{
				_putchar(' ');
			}

			for (hash = 0; hash <= heit; hash++)
			{
				_putchar(35);
			}

			red--;

			_putchar('\n');
		}
	}
}
