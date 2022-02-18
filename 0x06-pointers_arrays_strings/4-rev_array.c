#include "main.h"
/**
 * reverse_array -  reverses the content of an array of integers
 * @a: pointer
 * @n: bytes
 */
void reverse_array(int *a, int n)
{
	int i;
	int aux;

	i = 0;
	while (i < (n / 2))
	{
		aux = *(a + i);
		*(a + i) = *(a + n - i - 1);
		*(a + n - i - 1) = aux;
		i++;
	}
}
