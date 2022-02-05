#include <stdio.h>
/**
 * main - Entry point
 *
 * @void
 * Return: 0 (success)
 */
int main(void)
{
	unsigned int n;
	unsigned int e;

	n = 48;
	while (n <= 57)
	{
		putchar (n);
		n++;
	}
	e = 97;
	while (e <= 102)
	{
		putchar(e);
		e++;
	}
	putchar(10);
	return (0);
}
