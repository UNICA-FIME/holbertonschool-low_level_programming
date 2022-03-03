#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: width of array
 * @height: height of array
 * Return: pointer the array
 */
int **alloc_grid(int width, int height)
{
	int **ptr = NULL;
	int i, j, w;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = (int **)malloc(sizeof(int *) * width);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < height)
	{
		*(ptr + i) = (int *)malloc(sizeof(int) * height);
		if (*(ptr + i) == NULL)
		{
			return (NULL);
		}
		i++;
	}
	w = 0;
	while (w < height)
	{
		j = 0;
		while (j < width)
		{
			ptr[w][j] = 0;
			j++;
		}
		w++;
	}

	return (ptr);
}
