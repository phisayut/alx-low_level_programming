#include "main.h"

/**
 * _strcmp - compare strings
 * @s1: char 1
 * @s2:char2
 * Return: string
 */


int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i))
		i++;

	if (*(s2 + i))
		return (*(s1 + i) - *(s2 + i));
	else
		return (0);
}
