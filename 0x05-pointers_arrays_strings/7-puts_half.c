#include "main.h"
/**
 * puts_half - hat prints half of a string
 *
 * @str: pointer
 *
 */
void puts_half(char *str)
{
	int len;
	int i, j;
	int cont;

	cont = 0;
	len = 0;
	while (*(str + len) != '\0')
	{
		cont = cont + 1;
		len++;
	}

		if (cont % 2 == 0)
		{
			i = cont / 2;
			while (i < cont)
			{
			_putchar(*(str + i));
			i++;
			}

		}
		else
		{
		j = (cont - 1) / 2;
			while (j < cont)
			{
			_putchar(*(str + j));
			j++;
			}
		}
	_putchar(10);
}


