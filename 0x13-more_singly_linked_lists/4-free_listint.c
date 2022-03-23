#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 *
 * @head: pointer to struct
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;
	while (head != NULL)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
