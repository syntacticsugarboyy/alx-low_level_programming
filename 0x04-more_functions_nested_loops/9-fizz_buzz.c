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
		if (fzbz == 100)
		{
			printf("Buzz\n");
		}

		else if ((fzbz % 3) == 0 || (fzbz % 5) == 0)
		{
			if ((fzbz % 3) == 0 && (fzbz % 5) == 0)
			{
				printf("FizzBuzz, ");
			}
			else if ((fzbz % 3) == 0)
			{
				printf("Fizz, ");
			}
			else
			{
				printf("Buzz, ");
			}
		}

		else
		{
			printf("%d, ", fzbz);
		}
	}

	return (0);
}
