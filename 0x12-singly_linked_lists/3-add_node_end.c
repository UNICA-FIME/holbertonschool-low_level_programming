#include "lists.h"
/**
 * _sterlen - finds the length of a string
 *
 * @s: string to find the length of
 * Return: length of string
 */
int _sterlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * add_node_end - adds a new node to the end of linked list
 *
 * @head: double pointer to a linked list
 * @str: string to add to the new node
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ultimo;
	list_t *nuevo;

	if (str == NULL)
		return (NULL);
	nuevo = malloc(sizeof(list_t));
	if (nuevo == NULL)
		return (NULL);
	nuevo->str = strdup(str);
	if (nuevo->str == NULL)
	{
		free(nuevo);
		return (NULL);
	}
	nuevo->len = _sterlen(nuevo->str);
	nuevo->next = NULL;
	ultimo = *head;
	if (ultimo == NULL)
	{
		*head = nuevo;
		return (nuevo);
	}
	else
	{
		while (ultimo->next != NULL)
		{
			ultimo = ultimo->next;
		}
		ultimo->next = nuevo;
	}
	return (nuevo);
}
