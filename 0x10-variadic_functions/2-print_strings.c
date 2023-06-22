#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string that separates arguments
 * @n: number of arguments
 *
 * Description: A function that prints string arguments
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	char *string;
	va_list args;

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		string = va_arg(args, char *);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		if (index != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}
