#include "main.h"

/**
 * print_most_numbers - prints most numbers
 *
 * Description: A function that prints digits except 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int most;

	for (most = 48; most <= 57; most++)
	{
		if ((most != 50) && (most != 52))
		{
			_putchar(most);
		}
	}

	_putchar('\n');
}
