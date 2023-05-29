#include "main.h"

/**
 * print_rev - prints in reverse
 * @s: string to be reversed
 *
 * Description: A function that prints a string in reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
	}
	for (; index >= 0; index--)
	{
		_putchar(s[index]);
	}

	_putchar('\n');
}
