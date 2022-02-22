#include "main.h"
/**
 * *_memcpy - copy memory area
 *
 * @dest: memory area of destino
 * @src: memory area of origin
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
