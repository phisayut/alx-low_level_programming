#include "main.h"

/**
 * _strlen - length of string
 * @s: integer
 * Return: 0
 */

int _strlen(char *s)
{
	int lenst = 0;

	while (*s != '\0')
	{
		lenst++;
		s++;
	}

	return (lenst);
}
