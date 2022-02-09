#include "main.h"
/**
 *times_table - print the 9 times table;
 *
 * @void: any
 */
void times_table(void)
{
	unsigned int n;
	unsigned int m;
	unsigned int p;

	n = 0;
	while (n <= 9)
	{
		m = 0;
		while (m <= 9)
		{
			p = n * m;
			if (p < 10 || p == 0)
			{
				if (m != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(p + '0');
			}
			if (p >= 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
			m++;
		}
		n++;
		_putchar(10);
	}
}
