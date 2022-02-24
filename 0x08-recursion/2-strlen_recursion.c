#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: pointer to string
 * Return: numbre digit of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	_strlen_recursion(s + 1);
	return (1 + _strlen_recursion(s + 1));
}
