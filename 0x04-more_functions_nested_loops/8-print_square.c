#include "main.h"
/**
 * print_square -  prints a square
 * @size: variable
 *
 */
void print_square(int size)
{
	int h;
	int v;

	if (size <= 0)
	{
		_putchar(10);
	}
	else if (size > 0)
	{
		h = 1;
		while (h <= size)
		{
			v = 1;
			while (v <= size)
			{
				_putchar(35);
				v++;
			}
			_putchar(10);
			h++;
		}

	}
}
