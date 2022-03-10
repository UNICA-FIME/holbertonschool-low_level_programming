#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 *
 * @array: pointer to array
 * @size: size of array
 * @cmp: function pointer
 * Return:-1, i
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size >= 0 && array != NULL && cmp != NULL)
	{
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]) != '\0')
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
