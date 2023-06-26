#include "main.h"

/**
 * print_rev - print reverse string
 * @s: string
 */

void print_rev(char *s)
{

	int lenst = 0;
	int i;

	/* iterate to find length of string and point to last character */
	while (*s != '\0')
	{
		lenst++;
		++s;
	}

	/* go back to character before null character */
	s--;

	/* print string reversed */
	for (i = lenst; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
