#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: number to be printed
 *
 * Description: A function that prints the last digit of a number
 *
 * Return: The last digit
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (n < 0)
	{
		l *= -1;
	}

	_putchar(l + '0');

	return (l);
}
