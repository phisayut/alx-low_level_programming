#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - function that print names
 * @f: pointer value
 * @name: name to be printed
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
