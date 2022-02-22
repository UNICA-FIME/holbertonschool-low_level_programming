#include "main.h"
#include <stddef.h>
/**
 * *_strchr - locates a character in a string
 *
 * @s: string
 * @c: character
 * Return: *i or NULL
 */
char *_strchr(char *s, char c)
{
	char **i = NULL;

	while (*s != '\0')
	{
		if (*s == c)
		{
			i = &s;
			return (*i);
		}
		s++;
	}
	return (NULL);
}
