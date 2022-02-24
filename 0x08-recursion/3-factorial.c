#include "main.h"
/**
 * factorial - factorial of a given number.
 *
 * @n: number
 * Return: factorial, 1 and -1
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
