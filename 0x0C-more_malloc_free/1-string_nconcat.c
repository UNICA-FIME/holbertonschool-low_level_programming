#include "main.h"
/**
 * string_nconcat -  function that concatenates two strings
 * @s2: pointer
 * @s1: pointer
 * @n: size
 * Return: NULL or ptr1
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = NULL;
	char *ptr1 = NULL;
	unsigned int i, j, k, l, m;

	if (s1 == 0 || s2 == 0)
		return (0);
	for (i = 0; *(s1 + i) != '\0'; i++)
		;
	for (j = 0; *(s2 + j) != '\0'; j++)
		;
	ptr = (char *)malloc(i);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		*(ptr + k) = *(s1 + k);
	ptr1 = realloc(ptr, (i + j + 1));
	if (ptr1 == NULL)
	{
		free(ptr1);
		return (NULL);
	}

	l = i;
	if (n >= j)
	{
		for (m = 0; l < (i + j) && m < j; l++, m++)
			*(ptr1 + l) = *(s2 + m);
	}
	else
	{
		m = 0;
		for (m = 0; l < (i + j) && m < n; l++, m++)
			*(ptr1 + l) = *(s2 + m);
	}
	*(ptr1 + l) = 0;
	return (ptr1);
}
