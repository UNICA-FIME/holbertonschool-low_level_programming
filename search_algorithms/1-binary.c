#include "search_algos.h"
/**
 * printf_array - prints an array of integers
 *
 * @array: array to print
 * @size: size of array first value
 * @size_2: size of array
 */
void printf_array(int *array, size_t size, size_t size_2)
{
	size_t ptr_4;

	printf("Searching in array: ");
	for (ptr_4 = size; ptr_4 <= size_2; ptr_4++)
	{
		printf("%d", array[ptr_4]);
		if (ptr_4 != size_2)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - for a value in a sorted array of integers
 *
 * @array: pointer to the first element of the array
 * @size: number of element in array
 * @value: value to search
 *
 * Return: index where value is located, or -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	size_t ptr_1, ptr_2, ptr_3, ptr_5;

	if (array == NULL)
		return (-1);
	ptr_1 = 0;
	ptr_3 = size - 1;
	printf_array(array, ptr_1, ptr_3);
	while (ptr_1 < ptr_3)
	{
		ptr_2 = (ptr_1 + ptr_3) / 2;
		if (value == array[ptr_2])
		{
			printf("Searching in array: %d\n", array[ptr_2]);
			return (ptr_2);
		}
		if (array[ptr_2] < value)
		{
			ptr_1 = ptr_2 + 1;
			printf_array(array, ptr_1, ptr_3);
		}
		if (array[ptr_2] > value)
		{
			ptr_3 = ptr_2 - 1;
			printf("Searching in array: ");
			for (ptr_5 = ptr_1; ptr_5 <= ptr_3; ptr_5++)
			{
				printf("%d", array[ptr_5]);
				if (ptr_5 != ptr_3)
					printf(", ");
			}
			printf("\n");
		}
	}
	return (-1);
}
