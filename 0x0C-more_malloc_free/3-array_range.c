#include "main.h"
/**
 * array_range - creates an array of integers.
 *
 * @min: number min
 * @max: number max
 * Return: NULL or ptr
 */
int *array_range(int min, int max)
{
	int *ptr = NULL;
	int i, len;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		len = max  - min + 1;
		ptr = (int *)malloc(len * sizeof(int));
		if (ptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
		for (i  = 0; i < len; i++, min++)
		{
			*(ptr + i) = min;
		}

	}
	return (ptr);
}
