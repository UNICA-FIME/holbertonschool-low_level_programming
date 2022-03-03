#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: pointer the array
 */
int **alloc_grid(int width, int height)
{
	int **ptr = NULL;
	int i, j, w, h;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **)malloc(sizeof(int *) * width);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	i = 0;
	while (i < height)
	{
		*(ptr + i) = (int *)malloc(sizeof(int) * height);
		if (*(ptr + i) == NULL)
		{
			h = 0;
			while (h < width)
			{
				free(*(ptr + h));
				h++;
			}
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
		i++;
	}
	return (ptr);
}
