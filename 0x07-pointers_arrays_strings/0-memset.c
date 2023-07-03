#include "main.h"

/**
 * _memset - memory area function
 * @s:strings
 * @b:character value
 * @n: n value
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}
	return (s);

}
