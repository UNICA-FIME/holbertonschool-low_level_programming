#include "main.h"
/**
 * _strdup - copy a string to a newly allocated space in memory
 *
 * @str: string to copy
 * Return: pointer to duplicated string or NULL if error
 */
char *_strdup(char *str)
{
	int i, len;
	char *ptr = NULL;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}
	len++;
	ptr = (char *)malloc(len * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (*(str + i) != '\0')
	{
		*(ptr + i) = *(str + i);
		i++;
	}
	return (ptr);
}
