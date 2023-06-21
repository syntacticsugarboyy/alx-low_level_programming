#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function pointer
 *
 * Description: A function that prints a name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if ((*f) != NULL)
	{
		(*f)(name);
	}
}
