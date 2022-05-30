#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 *
 * @size: Is the size of the array
 * Return: pointer
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_array = NULL;

	h_array = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (h_array == NULL)
	{
		return (NULL);
	}
	h_array->size = size;
	h_array->array = malloc(sizeof(hash_node_t *) * size);
	if (h_array->array == NULL)
	{
		free(h_array);
		return (NULL);
	}
	return (h_array);
}
