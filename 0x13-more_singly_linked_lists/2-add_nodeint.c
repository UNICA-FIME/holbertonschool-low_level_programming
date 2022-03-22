#include "lists.h"
/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list.
 *
 *  @head: douuble pointer to the beginning of a listint_t list
 * @n: integer to add to the listint_t
 *  Return: address of new node (new)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	int i;
	listint_t *new;
	listint_t **tmp;

	new = NULL;
	tmp = head;
	i = n;
	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = i;
	new->next = NULL;
	new->next = *tmp;
	*tmp = new;
	return (new);
}
