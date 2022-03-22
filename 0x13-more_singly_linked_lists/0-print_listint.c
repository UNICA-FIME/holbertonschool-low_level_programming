#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list
 *
 * @h: pointer to struct listint_t
 * Return: i
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t i;

	i = 0;
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		i++;
	}
	return (i);
}
