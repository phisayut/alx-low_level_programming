#include "function_pointers.h"

/**
 * array_iterator - function to execute function
 * of a given paramter in array
 * @size: array size
 * @action: pointer of action to execute
 * @array: array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
