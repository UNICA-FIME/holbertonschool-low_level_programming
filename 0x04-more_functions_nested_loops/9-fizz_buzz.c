#include <stdio.h>
/**
 * main - Entry point
 *
 * @void: any
 * Return: 0
 */
int main(void)
{
	int n;

	n = 1;
	while (n <= 100)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			if ((n % 3 == 0) && (n % 5 == 0))
			{
				printf("FizzBuzz ");
			}
			if (n % 3 == 0)
			{
				printf("Fizz ");
			}
			if (n % 5 == 0)
			{
				printf("Buzz ");
			}
		}
		else
		{
			printf("%d ", n);
		}
		n++;
	}
	putchar(10);
	return (0);
}
