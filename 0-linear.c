#include "search_algos.h"
/**
 * linear_search - search a value in an array.
 *
 * @size: it's number of elements in array.
 * @value: it's value to search in array.
 * @array: this a array of elements.
 * Return: return index of value search or -1 error.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int find;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, *(array + i));
		if (*(array + i) == value)
		{
			find = i;
			return (find);
		}
	}
	return (-1);
}
