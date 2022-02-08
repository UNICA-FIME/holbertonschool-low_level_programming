#include "main.h"
/**
 * print_last_digit - Prints the last digit number
 *
 * @n: variable
 * Return: 0 (success)
 */
int print_last_digit(int n)
{
	int m;

	m = 0;
	if (n >= 0)
	{
		m = (n % 10);
		_putchar('0' + m);
	}
	else
	{
		m = (-1) * (n % 10);
		_putchar('0' + m);
	}
	return (m);
}
