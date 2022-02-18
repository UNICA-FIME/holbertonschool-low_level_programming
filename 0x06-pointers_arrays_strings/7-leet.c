#include "main.h"
/**
 * *leet - encodes a string into 1337.
 *
 * @p: pointer
 * Return: p
 */
char *leet(char *p)
{
	int i, j;
	char s[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char l[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	i = 0;
	while (*(p + i) != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (*(p + i) == s[j])
			{
				*(p + i) = l[j];
			}
			j++;
		}
		i++;
	}
	return (p);
}
