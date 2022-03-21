#include "lists.h"
/**
 * print_list - print all content of list_t
 *
 * @h: pointer to the first struct
 * Return: length of list_t
 */
size_t print_list(const list_t *h)
{
	size_t count;
	const list_t *actual;

	count = 0;
	actual = h;
	while (actual != NULL)
	{
		if (actual->str == NULL)
		{
			printf("%s\n", "[0] (nil)");
		}
		else
		{
			printf("[%u] %s\n", actual->len, actual->str);
		}
		actual = actual->next;
		count++;
	}
	return (count);
}
