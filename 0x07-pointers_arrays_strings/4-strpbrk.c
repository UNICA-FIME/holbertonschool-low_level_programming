#include "main.h"
/**
 * *_strpbrk - searches a string for any of a set of bytes.
 *
 * @s: string
 * @accept: string
 * Return: s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *aux;

	aux = accept;
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}
		accept = aux;
		s++;
	}
	return (NULL);
}
