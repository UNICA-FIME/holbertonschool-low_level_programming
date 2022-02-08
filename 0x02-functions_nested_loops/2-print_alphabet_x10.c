#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * @void: any
 */
void print_alphabet_x10(void)
{
	unsigned int n;
	unsigned int m;

	n = 0;
	while (n < 10)
	{
		m = 97;
		while (m <= 122)
		{
			_putchar(m);
			m++;
		}
		_putchar(10);
		n++;
	}
}
