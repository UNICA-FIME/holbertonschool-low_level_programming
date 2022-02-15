#include "main.h"
/**
 * print_rev - prints a string, in reverse
 *
 * @s: pointer
 */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		s++;
	}
	while (*(s - 1) != '\0')
	{
		_putchar(*(s - 1));
		s--;
	}
	_putchar(10);
}
