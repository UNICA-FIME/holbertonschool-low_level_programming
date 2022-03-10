#include "3-calc.h"
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int num1, num2, calc;
	char *operator;
	int (*ptr)(int, int);

	num1 = 0;
	num2 = 0;
	calc = 0;
	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	ptr = get_op_func(operator);
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	calc = ptr(num1, num2);
	printf("%d\n", calc);
	return (0);
}
