#include "main.h"
/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 *
 * @void: any
 */
void more_numbers(void)
{
	unsigned int m;
	unsigned int p;
	unsigned int r;

	r = 0;
	while (r <= 10)
	{
		m = 48;
		while (m <= 49)
		{
			p = 48;
			while (p <= 57)
			{
				if (m == 49 && p < 53)
				{
					_putchar(m);
				}
				if (m == 48 || p <= 52)
				{
					_putchar(p);
				}
				p++;
			}
			m++;
		}
		_putchar(10);
		r++;
	}
}
