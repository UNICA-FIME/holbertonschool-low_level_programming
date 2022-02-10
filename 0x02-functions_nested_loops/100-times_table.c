#include "main.h"
/**
 * print_times_table - prints table
 *
 * @n: variable
 */
void print_times_table(int n)
{
	int h;
	int v;
	int p;

	if (n <= 15 && n >= 0)
	{
		h = 0;
		while (h <= n)
		{
			v = 0;
			while (v <= n)
			{
				p = h * v;
				if (p < 10)
				{
					if (v != 0)
					{
						_putchar(44);
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(p + '0');
				}
				else if (p >= 10  && p < 100)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0');
				}
				else if (p >= 100)
				{
					_putchar(44);
					_putchar(32);
					_putchar((p / 100) + '0');
					_putchar((p - ((p / 100) * 100)) / 10 + '0');
					_putchar((p % 10) + '0');
				}
				v++;
			}
			_putchar(10);
			h++;
		}
	}
 }
