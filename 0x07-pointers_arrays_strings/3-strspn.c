#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: string
 * @accept: string
 * Return: cont
 */
unsigned int _strspn(char *s, char *accept)
{
	char *aux;
	char i, j;
	unsigned int cont;

	aux = accept;
	cont = 0;
	while (*s != '\0')
	{
		i = *s;
		while (*accept != '\0')
		{
			j = *accept;
			if (i == j)
			{
				cont = cont + 1;
				break;
			}
			accept++;
		}
		accept = aux;
		if (i != j)
		{
			break;
		}
		s++;
	}
	return (cont);
}
