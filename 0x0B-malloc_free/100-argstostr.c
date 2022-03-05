#include "main.h"
/**
 * argstostr - concatenates all the arguments
 *
 * @ac: argument count
 * @av: argument vector
 * Return: ptr or NULL
 */
char *argstostr(int ac, char **av)
{
	char *ptr = NULL;
	int i, j, m;
	int count = 0;

	m = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			count++;
		}
		count++;
	}
	count++;
	ptr = (char *)malloc(count * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, m++)
		{
			*(ptr + m) = av[i][j];
		}
		*(ptr + m) = '\n';
		m++;
	}
	*(ptr + m) = 0;
	return (ptr);
}
