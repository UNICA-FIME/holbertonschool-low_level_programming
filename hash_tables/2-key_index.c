#include "hash_tables.h"
/**
 * key_index - calculater index.
 * @key: pointer to string.
 * @size: Size the array
 *
 * Return: index
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
