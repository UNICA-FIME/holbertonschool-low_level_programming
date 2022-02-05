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

	n = 48;
	while (n <= 57)
	{
		m = 48;
		while (m <= 57)
		{
			if (n < m && n != m)
			{
				putchar(n);
				putchar(m);
				if (ni != 56)
				{
					putchar(44);
					putchar(32);
				}
			}
			m++;
		}
		n++;
	}
	putchar(10);
	return (0);
}
