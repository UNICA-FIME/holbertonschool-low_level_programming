#include "main.h"

/**
 * _strlen - return length of string
 *
 * @s: string to check
 * Return: length of s
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(s + 1));
	}
}
/**
 * palindrome - checks to see if a string is a palindrome
 *
 * @i: left hand index
 * @r: right hand index
 * @s: possible palindrome
 * Return: 1 if palindrome 0 if not
 */
int palindrome(int i, int r, char *s)
{
	if (i >= r)
	{
		return (1);
	}
	else if (*(s + i) != *(s + r))
	{
		return (0);
	}
	else
	{
		return (palindrome(i + 1, r - 1, s));
	}
}
/**
 * is_palindrome - states if a string is a palindrome
 *
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int n;

	n = _strlen(s) - 1;
	return (palindrome(0, n, s));
}
