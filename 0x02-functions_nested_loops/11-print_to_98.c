#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers
 *
 * @n: variable
 *
 */
void print_to_98(int n)
{
	int m;

	if (n <= 98)
	{
		m = n;
		while (m <= 98)
		{
			printf("%d", m);
			if (m != 98)
			{
				printf(", ");
			}
			m++;
		}
	}
	if (n > 98)
	{
		m = n;
		while (m >= 98)
		{
			printf("%d", m);
			if (m != 98)
			{
				printf(", ");
			}
			m--;
		}
	}
	printf("\n");
}
