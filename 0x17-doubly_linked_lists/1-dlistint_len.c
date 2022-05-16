#include "lists.h"

/**
 * dlistint_len - Function that return the number element in a DLL
 * @h: pointer to struct
 * Return: i number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = NULL;
	size_t i = 0;

	tmp = h;
	while (tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
