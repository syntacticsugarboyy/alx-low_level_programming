#include "main.h"

/**
 * main - Entry point
 *
 * Description: A program that prints fibonacci numbers to 50
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int num1 = 1;
	int num2 = 1;
	int run;
	int fib;

	_putchar(num1);
	_putchar(',');
	_putchar(' ');
	_putchar(num2);
	_putchar(',');
	_putchar(' ');

	for (fib = 3; fib <= 50; fib++)
	{
		run = num1 + num2;

		printf("%d, ", run);

		num1 = num2;
		num2 = run;
	}
	printf("\n");

	return (0);
}
