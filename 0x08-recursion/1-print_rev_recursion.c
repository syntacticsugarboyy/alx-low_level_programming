#include "main.h"

/**
 * _print_rev_recursion - recursions in reverse
 * @s: pointer to the string
 *
 * Description: A function that prints a string in reverse
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar (*s);
	}
}
