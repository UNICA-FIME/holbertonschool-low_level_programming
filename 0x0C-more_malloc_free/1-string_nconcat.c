#include "main.h"
/**
 * string_nconcat -  function that concatenates two strings
 * @s2: pointer
 * @s1: pointer
 * @n: size
 * Return: NULL or ptr1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = NULL;
	unsigned int i, j, l, m;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; *(s1 + i) != '\0'; i++)
			;
	}
	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; *(s2 + j) != '\0'; j++)
			;
	}
	if (j > n)
	{
		j = n;
	}
	ptr = malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (l = 0; l < i; l++)
		*(ptr + l) = *(s1 + l);
	for (m = 0; m < j; m++, l++)
		*(ptr + l) = *(s2 + m);
	*(ptr + l) = 0;
	return (ptr);
}
