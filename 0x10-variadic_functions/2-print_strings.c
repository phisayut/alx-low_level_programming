#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function to print strings
 * @separator: delimmiter
 * @n: amount of arguments
 * @...: variadic parameter
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list word;
	unsigned int i;
	char *s;

	if (n > 0)
	{
		va_start(word, n);
		for (i = 1; i <= n; i++)
		{
			s = va_arg(word, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);

			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(word);
	}
	printf("\n");
}
