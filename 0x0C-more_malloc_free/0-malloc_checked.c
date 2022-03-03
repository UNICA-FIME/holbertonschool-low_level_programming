#include "main.h"
/**
 * malloc_checked - function that allocates memory
 *
 * @b: size in byte
 * Return: ptr
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = NULL;

	ptr = (int *)malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
