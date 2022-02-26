#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or -1
 *
 */
int main(int argc, char *argv[])
{
	int i;
	int pro;

	i = 1;
	pro = 0;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	pro = atoi(argv[i]) * atoi(argv[i + 1]);
	printf("%d\n", pro);
	return (0);
}
