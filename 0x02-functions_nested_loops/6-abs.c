#include "main.h"
/**
 * _abs - computes the absolute value
 *
 * @n: variable
 * Return: 0 (success)
 */
int _abs(int n)
{
	int p;

	if (n < 0)
	{
		p = n * (-1);
		return (p);
	}
	else
	{
		return (n);
	}
}



