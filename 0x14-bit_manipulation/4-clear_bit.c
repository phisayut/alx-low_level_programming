#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0.
 * @n: A pointer to the bit.
 * @index: The index to set the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max_bits;
	unsigned long int mask = 1;

	/* validate index is not out of range */
	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	/* create mask with 0 at index (...11011...) to work on that index */
	mask = ~(mask << index);
	*n = (*n &mask);

	return (1);
}
