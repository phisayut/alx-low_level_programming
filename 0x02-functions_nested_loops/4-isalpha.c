#include "main.h"

/**
 * _isalpha -checks for alpahbet character
 * @c: character to check
 * Return: 1 if lower , 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
