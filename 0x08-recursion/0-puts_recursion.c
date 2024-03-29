#include "main.h"

/**
 * _puts_recursion - replicates puts
 * @s: pointer to string
 *
 * Description: A function that prints a string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
		return;
	}

	_putchar (*s);
	_puts_recursion(s + 1);
}
