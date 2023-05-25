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
	int loop;
	int fzbz = 0;

	for (loop = 1; loop <= 100; loop++)
	{
		if ((fzbz % 3) == 0 || (fzbz % 5) == 0)
		{
			if ((fzbz % 3) == 0 && (fzbz % 5) == 0)
			{
				printf("FizzBuzz, ");
			}
			else if (fzbz % 3 == 0)
			{
				printf("Fizz, ");
			}
			else
			{
				printf("Buzz, ");
			}
		}

		if (loop == 100)
		{
			printf("%d\n", fzbz);
		}

		else
		{
			printf("%d, ", fzbz);
		}
	}
}
