#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 *
 * @size: variable
 */
void print_triangle(int size)
{
	int f;
	int c;
	
	if (size <= 0)
	{
		_putchar(10);
	}
	for (f = 1; f <= size; f++)
	{
		for (c = 1; c <= size; c++)
		{
			if (c >= size - (f - 1))
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
	_putchar(10);
	}
}

