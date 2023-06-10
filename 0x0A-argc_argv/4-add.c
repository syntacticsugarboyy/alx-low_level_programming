#include "main.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: A program that adds positive arguments
 *
 * Return: 0 (Success) or 1(Error)
 */

int main(int argc, char **argv)
{
	int index;
	int num;
	int ll;

	int sum = 0;

	for (index = 1; index < argc; index++)
	{
		for (ll = 0; argv[index][ll] != '\0'; ll++)
		{
			if (!isdigit(argv[index][ll]))
			{
				printf("Error\n");

				return (1);
			}
		}
		num += atoi(argv[index]);
		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
