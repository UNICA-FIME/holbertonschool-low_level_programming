#include "main.h"
/**
 * *_strncpy - Write a function that copies a string.
 *
 * @dest: pointer
 * @src: pointer
 * @n: number bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (*(src + i) != '\0' && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
