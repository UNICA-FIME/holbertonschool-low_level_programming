#include "main.h"
/**
 * *cap_string - capitalizes all words of a string
 *
 * @s: pointer
 * Return: s
 */
char *cap_string(char *s)
{
	int i, j;
	int aux;
	char car[13] = {9, 32, 10, 44, 59, 46, 63, 33, 34, 40, 41, 123, 125};

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'A' && *(s + i) <= 'Z')
		{
			*(s + i) = *(s + i);
		}
		j = 0;
		while (j < 13)
		{
			if (*(s + i - 1) == car[j])
			{
				if (*(s + i) >= 'a' && *(s + i) <= 'z')
				{
					aux = *(s + i);
					*(s + i) = aux - 32;
				}
			}
			j++;
		}
		i++;
	}
	return (s);
}
