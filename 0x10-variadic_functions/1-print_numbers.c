#include "variadic_functions.h"

/**
 * print_numbers - prints arguments
 * @separator: string to separate arguments
 * @n: number of arguments
 *
 * Description: A function that prints numbers
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;

	va_list args;

	va_start(args, n);

	if (n != 0)
	{
		for (index = 0; index < n; index++)
		{
			printf("%d", va_arg(args, int));

			if (index != (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
}
