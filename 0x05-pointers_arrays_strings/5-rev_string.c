#include "main.h"
/**
 * rev_string - Write a function that reverses a string
 *
 * @s: pointer
 */
void rev_string(char *s)
{
	char aux;
	int cont;
	int i;

	cont = 0;
	while (*(s + cont)  != '\0')
	{
		cont++;
	}
	i = 0;
	while (i < (cont / 2))
	{
		aux = *(s + i);
		*(s + i) = *(s + cont - 1 - i);
		*(s + cont - 1 - i) = aux;
		i++;
	}
}
