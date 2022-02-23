#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  sum of the two diagonals of a square matrix
 *
 * @a: pointer
 * @size: pointer
 *
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int suma, suma1, suma2;

	i = 0;
	suma = 0;
	suma1 = 0;
	suma2 = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (i == j)
			{
				if (i + j == size - 1)
				{
					suma2 = *a;
				}
				suma = suma + *a;
			}
			else if (i + j == size - 1)
			{
				suma1 = suma1 + *a;
			}

			j++;
			a++;
		}
		i++;
	}
	printf("%i, %i\n", suma, (suma1 + suma2));
}
