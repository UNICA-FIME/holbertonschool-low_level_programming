#include "main.h"
/**
 * *_memset -  fills memory with a constant byte
 *
 * @s: Pointer the memory area.
 * @b: The constant byte.
 * @n: fills of bytes.
 * Return: return the pointer s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
