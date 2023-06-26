#include "main.h"

/**
 * swap_int - Swap integers
 * @a: integer a
 * @b: integer b
 */

void swap_int(int *a, int *b)
{
	int val;

	val = *a;
	*a = *b;
	*b = val;
}
