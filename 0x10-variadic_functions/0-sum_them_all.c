#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sum all integers
 * @n: integers
 * @...: variadic parameter
 * Return: retrun 0 , if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nos;
	unsigned int index, sum = 0;

	if (n == 0)
		return (0);

	va_start(nos, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nos, int);

	va_end(nos);

	return (sum);
}
