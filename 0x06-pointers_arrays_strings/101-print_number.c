#include "main.h"
/**
 * print_number - function that prints an integer
 *
 * @n: number integer
 */
void print_number(int n)
{
	int c0, c1, c2, c3, c4, c5, c6, c7, c8, c9;
	int s1, s2, s3, s4, s5, s6, s7, s8, s9;

	c9 = ((n / 1000000000) % 10);
	s9 = c9;
	c8 = ((n / 100000000) % 10);
	s8 = s9 + c8;
	c7 = ((n / 10000000) % 10);
	s7 = s8 + c7;
	c6 = ((n / 1000000) % 10);
	s6 = s7 + c6;
	c5 = ((n / 100000) % 10);
	s5 = s6 + c5;
	c4 = ((n / 10000) % 10);
	s4 = s5 + c4;
	c3 = ((n / 1000) % 10);
	s3 = s4 + c3;
	c2 = ((n / 100) % 10);
	s2 = s3 + c2;
	c1 =  (n / 10) % 10;
	s1 = s2 + c1;
	c0 =  (n % 10);
	if (n < 0)
	{
		_putchar('-');
		c9 *= -1, c8 *= -1, c7 *= -1, c6 *= -1, c5 *= -1, c4 *= -1;
		c3 *= -1, c2 *= -1, c1 *= -1, c0 *= -1;
	}
	if (s9 != 0)
		_putchar('0' + c9);
	if (s8 != 0)
		_putchar('0' + c8);
	if (s7 != 0)
		_putchar('0' + c7);
	if (s6 != 0)
		_putchar('0' + c6);
	if (s5 != 0)
		_putchar('0' + c5);
	if (s4 != 0)
		_putchar('0' + c4);
	if (s3 != 0)
		_putchar('0' + c3);
	if (s2 != 0)
		_putchar('0' + c2);
	if (s1 != 0)
		_putchar('0' + c1);
	_putchar('0' + c0);
}
