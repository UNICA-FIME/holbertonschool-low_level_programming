#include "main.h"
/**
 * create_array - creates array of chars, initializes it with a specific char
 *
 * @size: size of array to be created
 * @c: char to initialize array with
 *
 * Return: pointer to the array or NULL if malloc fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = NULL;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		*(ptr + i) = c;
		i++;
	}
	return (ptr);
}
