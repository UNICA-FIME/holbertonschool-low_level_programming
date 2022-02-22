#include "main.h"
/**
 * *_strchr - locates a character in a string
 *
 * @s: string
 * @c: character
 * Return: i or NULL
 */
char *_strchr(char *s, char c)
{
	char **i;

	if (s != NULL)
	while (*s != '\0')
	{
		if (*s == c)
		{
			i = &s;
			return (*i);
		}
		else
		{
			s++;
		}
	}
	return (NULL);
}
