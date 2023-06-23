#include "variadic_functions.h"

/**
 * print_all - prints all arguments
 * @argu: argument
 * @format: list of types of argument
 *
 * Description: A function that prints anything
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int index = 0;
	char *string;
	char *sep = "";
	va_list args;
	va_start(args, format);

	if (format)
		while (format[index])
		{
			switch (format[index])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					string = va_arg(args, char *);
					if (string == NULL)
					{
						string = "(nil)";
					}
					printf("%s%s", sep, string);
					break;
				default:
					index++;
					continue;
			}
			sep = ", ";
			index++;
		}
	printf("\n");

	va_end(args);
}
