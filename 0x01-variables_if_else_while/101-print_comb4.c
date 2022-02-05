#include <stdio.h>
/**
 * main - Entry point
 *
 * @void: any
 * Return: 0 (success)
 */
int main(void)
{
	unsigned int n;
	unsigned int m;
	unsigned int p;

	n = 48;
	while (n <= 57)
	{
		m = 48;
		while (m <= 57)
		{
			p = 48;
			while (p <= 57)
			{
				if ((n != m) && (n != p) && (m != p) && (n < m) && (n < p) && (m < p))
				{
					putchar(n);
					putchar(m);
					putchar(p);
					if (n != 55)
					{	putchar(44);
						putchar(32);
					}
				}
				p++;
			}
			m++;
		}
		n++;
	}
	putchar(10);
	return (0);
}
