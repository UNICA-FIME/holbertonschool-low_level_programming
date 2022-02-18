#include "main.h"
/**
 * *_strcat - concatenates two strings
 *
 * @dest: pointer
 * @src: pointer
 * Return: re: ret
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (ret);
}
