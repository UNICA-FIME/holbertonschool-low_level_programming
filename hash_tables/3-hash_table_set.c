#include "hash_tables.h"
/**
 * new_nodo - creates a new hash node
 * @key: key for the node
 * @value: for the node
 *
 * Return: the new node, or NULL on failure
 */

hash_node_t *new_nodo(const char *key, const char *value)
{
	hash_node_t *new = NULL;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(new);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->value);
		free(new);
		return (NULL);
	}
	new->next = NULL;
	return (new);
}
/**
 * hash_table_set - sets a key to a value in the hash table
 * @ht: hash table to add elemt to
 * @key: key for the data
 * @value: data to store
 *
 * Return: 1 if successful, 0 otherwise
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_1 = NULL;
	hash_node_t *tmp;
	char *new_value;

	if (*key == '\0' || *value == '\0' || ht->size == 0
	   || ht == NULL || ht->array == NULL || strlen(key) == 0)
	{
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
			{
				return (0);
			}
			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
		tmp = tmp->next;
	}
	new_1 = new_nodo(key, value);
	if (new_1 == NULL)
	{
		return (0);
	}
	new_1->next = ht->array[index];
	ht->array[index] = new_1;
	return (1);
}
