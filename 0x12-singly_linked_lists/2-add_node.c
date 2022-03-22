#include "lists.h"
/**
 * _strlen - finds the length of a string
 * @s: string to find the length of
 *
 * Return: length of string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * add_node - adds a node to the beginning of a linked list
 * @head: double pointer to a lined list
 * @str: string to add to the new node
 *
 * Return: pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nuevo = NULL;

	nuevo = malloc(sizeof(list_t));
	if (nuevo == NULL)
	{
		return (NULL);
	}
	nuevo->str = strdup(str);
	if (nuevo->str == NULL)
	{
		free(nuevo);
		return (NULL);
	}
	nuevo->len = _strlen(nuevo->str);
	nuevo->next = NULL;
	nuevo->next = *head;
	*head = nuevo;
	return (nuevo);
}
