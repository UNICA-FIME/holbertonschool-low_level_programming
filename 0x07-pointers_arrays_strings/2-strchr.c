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
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
