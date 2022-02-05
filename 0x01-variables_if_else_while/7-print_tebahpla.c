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

	n = 122;
	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar(10);
	return (0);
}
