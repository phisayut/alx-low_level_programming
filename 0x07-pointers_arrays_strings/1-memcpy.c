#include "main.h"

/**
 * _memcpy - memory copy
 * @dest: copy destination
 * @src: source
 * @n: n value
 * Return: Memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			dest[i] = src[i];
	}

	return (dest);

}
