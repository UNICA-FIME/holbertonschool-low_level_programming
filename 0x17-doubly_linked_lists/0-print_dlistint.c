#include "lists.h"
/**
 * print_dlistint - prints all the elements of DLL
 *
 * @h: pointer to DLL
 * Return: return the number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = NULL;
	size_t i = 0;

	tmp = h;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		i++;
		tmp = tmp->next;
	}
	return (i);
}
