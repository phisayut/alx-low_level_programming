#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase
 * @c: character
 * Return: 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
