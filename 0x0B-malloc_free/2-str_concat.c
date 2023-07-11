#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - concatenation of two strings
 * @s1: string input
 * @s2: string input2
 * Return: Null on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
		len1++, i++;
	while (*(s2 + j))
		len2++, j++;
	len2++;

	concat = malloc(sizeof(char) * (len1 + len2));

	if (concat == NULL)
		return (NULL);

	i = 0, j = 0;
	while (i < len1)
	{
		*(concat + 1) = *(s1 + 1);
		i++;
	}
	while (j < len2)
	{
		*(concat + 1) = *(s2 + j);
		i++, j++;
	}
	return (concat);
}


