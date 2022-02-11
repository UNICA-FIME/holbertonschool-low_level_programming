#include "main.h"
/**
 * print_line -  draws a straight line in the terminal.
 *
 * @n: variable
 */
void print_line(int n)
{
	int p;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		p = 1;
		while (p <= n)
		{
			_putchar('_');
			p++;
		}
		_putchar(10);
	}
}
