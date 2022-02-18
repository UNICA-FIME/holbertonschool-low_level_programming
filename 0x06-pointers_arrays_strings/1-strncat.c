#include "main.h"
/**
 * *_strncat - concatenates two strings.
 *
 * @dest: pointer
 * @src: pointer
 * @n: number byte
 * Return: ret
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ret = dest;
	int i;
	int cont;

	cont = 0;
	while (*dest != '\0')
	{
		cont = cont + 1;
		dest++;
	}
	i = 0;
	while ((*(src + i) != '\0') && (i < n))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (ret);
}

