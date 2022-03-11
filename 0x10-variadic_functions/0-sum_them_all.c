#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of argument const
 * Return: sum or zero
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;

	if (n == 0)
	{
		return (0);
	}
	va_list ap;

	va_start(ap, n);
	i = 0;
	sum = 0;
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}
