#include "main.h"
/**
 * binary_to_uint -  function that converts a binary number to an unsigned int
 *
 * @b: pointer to string
 * Return: 0 or unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n;

	n = 0;
	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		n = n << 1;
		if (*b == '1')
		{
			n = n ^ 1;
		}
		b++;
	}
	return (n);
}
