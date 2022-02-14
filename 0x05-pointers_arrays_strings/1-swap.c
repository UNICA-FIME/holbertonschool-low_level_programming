#include "main.h"
/**
 * swap_int - swaps two number
 *
 * @a: varable
 * @b: variable
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
