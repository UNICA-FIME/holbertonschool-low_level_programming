#include "main.h"
/**
 * *_strstr -  locates a substring
 *
 * @haystack: string
 * @needle: string
 * Return: NULL or haystack
 */
char *_strstr(char *haystack, char *needle)
{
	char *aux;

	aux = needle;
	while (*needle != '\0')
	{
		while (*haystack != '\0')
		{
			if (*(haystack) == *(needle + 0) && *haystack != '\0' && *needle != '\0')
			{
				return (haystack);
			}
			haystack++;
		}
		needle = aux;
		needle++;
	}
	return (NULL);
}
