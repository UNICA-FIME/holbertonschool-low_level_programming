#include "main.h"
/**
 * find_sqtr -  natural square root of a number
 *
 * @n: number
 * @i: number
 * Return: i, -1
 */
int find_sqtr(int n, int i)
{
	if (n / i == i)
	{
		return (i);
	}
	if (i > (n / i))
	{
		return (-1);
	}
	return (find_sqtr(n, i + 1));
}
/**
 * _sqrt_recursion -  natural square root of a number
 *
 * @n:number
 * Return: -1, 0
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	return (find_sqtr(n, 1));
}
