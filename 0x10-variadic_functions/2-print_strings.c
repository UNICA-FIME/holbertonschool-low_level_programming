#include "variadic_functions.h"
/**
 * print_strings - print string
 *
 * @separator: pointer to string
 * @n : number of arguments
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *m;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		m = va_arg(ap, char *);
		if (m == NULL)
		{
			printf("(nil)");
		}
		else if (m != NULL)
		{
			printf("%s", m);
		}
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
