#include <stdio.h>
/**
 * main - Entry point
 *
 * @void: any
 * Return: 0 (success)
 */
int main(void)
{
	unsigned int o;
	unsigned int p;
	unsigned int q;

	o = 97;
	if (o > 65)
	{
		p = 97;
		while (p <= 122)
		{
			putchar(p);
			p++;
		}
		q = 65;
		while (q <= 90)
		{
			putchar(q);
			q++;
		}
	}
	putchar(10);
	return (0);
}
