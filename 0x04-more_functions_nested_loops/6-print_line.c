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
		continue;
	}

	else
	{
		for (line = 0; line <= n; line++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
