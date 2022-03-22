#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 *
 * @h: pointer to struct
 * Return: i (number of element in a linked)
 */
size_t listint_len(const listint_t *h)
{
	size_t i;
	const listint_t *ptr;

	ptr = h;
	i = 0;
	while (ptr != NULL)
	{
		ptr = (*ptr).next;
		i++;
	}
	return (i);
}
