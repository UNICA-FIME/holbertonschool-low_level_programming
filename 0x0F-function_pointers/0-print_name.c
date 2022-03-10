#include "function_pointers.h"
/**
 * print_name - is callback function
 *
 * @name:  string
 * @f: pointer to fuction
 */
void print_name(char *name, void (*f)(char *))
{
	if (*f != 0)
	{
		f(name);
	}
}
