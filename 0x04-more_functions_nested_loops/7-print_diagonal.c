#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: variable
 */
void print_diagonal(int n)
{
	int p;
	int e;

	if (n <= 0)
	{
		_putchar(10);
	}
	else if (n > 0)
	{
		p = 1;
		while (p <= n)
		{
			if (p == 1)
			{
				_putchar(92);
				_putchar(10);
			}
			else if (p > 1)
			{
				e = 1;
				while (e < p)
				{
					_putchar(32);
					e++;
				}
				_putchar(92);
				_putchar(10);
			}
			p++;
		}
	}
}
