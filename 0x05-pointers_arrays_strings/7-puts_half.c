#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * puts_half - half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int num;
	int len = _strlen(str);

	/* find the index to start depending on even/odd amount of strlen */
	if (len % 2 != 0)
		num = (len / 2) + 1;
	else
		num = (len / 2);

	while (num < len)
	{
		_putchar(*(str + num));
		num++;
	}
	_putchar('\n');
}
