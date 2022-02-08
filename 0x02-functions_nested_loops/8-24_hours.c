#include "main.h"
/**
 * jack_bauer - prints minutes of the day
 *
 * @void: any
 *
 */
void jack_bauer(void)
{
	unsigned int m;
	unsigned int n;
	unsigned int p;
	unsigned int q;

	m = 48;
	while (m <= 50)
	{
		n = 48;
		while (n <= 51)
		{
			p = 48;
			while (p <= 53)
			{
				q = 48;
				while (q <= 57)
				{
					_putchar(m);
					_putchar(n);
					_putchar(58);
					_putchar(p);
					_putchar(q);
					_putchar(10);
					q++;
				}
				p++;
			}
			n++;
		}
		m++;
	}
}

