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

	n = 97;
	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar(10);
	return (0);
}
