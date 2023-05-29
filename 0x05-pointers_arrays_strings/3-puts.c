#include "main.h"

/**
 * _puts - prints to stdout
 * @str: string to be printed
 *
 * Description: A function that prints a string to stdout
 *
 * Return: void
 */

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
