#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints sizes of datatypes
 *
 * Return: Akways 0 (Success)
 */

int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu byte(s)", (unsigned long)sizeof(ll));
	printf("Size of a float: %lu byte (s)", (unsigned long)sizeof(f));

	return (0);
}
