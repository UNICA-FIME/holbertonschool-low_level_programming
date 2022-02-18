#include "main.h"
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @s: pointer
 * Return: s
 */
char *string_toupper(char *s)
{
	int i;
	char aux;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'A' && *(s + i) <= 'Z')
		{
			*(s + i) = *(s + i);
		}

		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			aux = *(s + i);
			*(s + i) = aux - 32;
		}
		i++;
	}
	return (s);
}
