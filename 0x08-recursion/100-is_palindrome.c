#include "main.h"

/**
 * is_palindrome - checks if s is a palindrome
 * @s: pointer to the string to be checked
 *
 * Description: A function that checks if a string is a palindrome
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);

	if (len == 0 || *s != s[len - 1])
	{
		return (0);
	}

	return (isPalindrome(s, 0, len - 1));
}

/**
 * _strlen_recursion - finds the length of a string
 * @s: pointer to string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * isPalindrome - checks for palindromes
 * @s: string to be checked
 * @i: first index
 * @l: last index
 *
 * Return: 1 or 0
 */

int isPalindrome(char *s, int i, int l)
{
	if (i == l)
	{
		return (1);
	}

	if (i == (l - 1))
	{
		return (s[i] == s[l]);
	}

	if (s[i] != s[l])
	{
		return (0);
	}

	return (isPalindrome(s, i + 1, l - 1));
}
