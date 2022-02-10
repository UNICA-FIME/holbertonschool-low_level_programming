#include "main.h"
/**
 * print_numbers - prints the number from 0 to 9
 *
 * @void: any
 */
void print_numbers(void)
{
	unsigned int n;

	n = 48;
	while (n <= 57)
	{
		_putchar(n);
		n++;
	}
	_putchar(10);
}
