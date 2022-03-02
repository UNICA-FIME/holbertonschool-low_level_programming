#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space in memory, or NULL if error
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, l, m;
	char *ptr = NULL;

	if (s1 == NULL)
		i = 0;
	else
	{
		i = 0;
		while (*(s1 + i) != '\0')
			i++;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		j = 0;
		while (*(s2 + j) != '\0')
			j++;
	}
	j++;
	ptr = (char *)malloc((i + j) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	l = 0;
	while (*(s1 + l) != '\0')
	{
		*(ptr + l) = *(s1 + l);
		l++;
	}
	m = 0;
	while (*(s2 + m) != '\0')
	{
		*(ptr + l) = *(s2 + m);
		l++;
		m++;
	}
	*(ptr + l) = '\0';
	return (ptr);
}
