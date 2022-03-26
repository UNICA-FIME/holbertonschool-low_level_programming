#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: 1 or index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int binary;

	binary = (sizeof(n) * 8);
	if (index < binary)
	{
		return (((1 << index) & n) >> index);
	}
	return (-1);
}
