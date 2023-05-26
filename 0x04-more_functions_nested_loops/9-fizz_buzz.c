#include "main.h"

/**
 * main - Entry point
 *
 * Description: A program that prints Fizz, Buzz and Fizzbuzz
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int fzbz;

	for (fzbz = 1; fzbz <= 100; fzbz++)
	{
		if ((fzbz % 3) == 0 && (fzbz % 5) != 0)
			printf("Fizz ");

		else if ((fzbz % 3) != 0 && (fzbz % 5) == 0)
			printf("Buzz ");

		else if ((fzbz % 3) == 0 && (fzbz % 5) == 0)
			printf("FizzBuzz");

		else
			printf("%d", fzbz);

		if (!(fzbz == 100))
			printf(" ");
	}
	printf("\n");

	return (0);
}
