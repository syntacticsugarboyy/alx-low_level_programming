#include "main.h"

/**
 * print_line - prints a line
 * @n: number of underscores to be printed
 *
 * Description: A function that draws a straight line
 *
 * Return: void
 */

void print_line(int n)
{
	int line;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (line = 1; line <= n; line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
