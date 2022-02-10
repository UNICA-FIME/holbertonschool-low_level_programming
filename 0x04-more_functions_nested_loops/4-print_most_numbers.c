#include "main.h"
/**
 * print_most_numbers - prints numbers, from 0 to 9
 *
 * @void - any
 */
void print_most_numbers(void)
{
	unsigned int n;

	n = 48;
	while (n <= 57)
	{
		if (n != 50 && n != 52)
		{
			_putchar(n);
		}
		n++;
	}
	_putchar(10);
}
