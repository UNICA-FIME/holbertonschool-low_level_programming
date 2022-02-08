#include "main.h"
/**
 * print_alphabet - Prints the alphabet
 *
 * @void: any
 */
void print_alphabet(void)
{
	unsigned int n;

	n = 97;
	while (n <= 122)
	{
		_putchar(n);
		n++;
	}
	_putchar(10);
}
