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
	int i;
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
		if (cont % 2 != 0)
		{
		i = (cont - 1) / 2;
			while (i < cont)
			{
			_putchar(*(str + i));
			i++;
			}
		}
	_putchar(10);
}


