#include "main.h"
/**
 * encontrarPrimo - busca divisores
 *
 * @n: number
 * @div: divisor
 * Return: 1, 0
 */
int encontrarPrimo(int n, int div)
{
	if (div > n / 2)
	{
		return (1);
	}
	else
	{
		if (n % div == 0)
		{
			return (0);
		}
		else
		{
			return (encontrarPrimo(n, div + 1));
		}
	}
}
/**
 * is_prime_number -  input integer is a prime number
 *
 * @n: number
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (encontrarPrimo(n, 2));
}
