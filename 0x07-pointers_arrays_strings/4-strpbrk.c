#include "main.h"
#define NULL 0

/**
 * _strpbrk - return pointer to byte
 * @s: string
 * @accept: accept string
 * Return: pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
		i++;
	}
	return (NULL);

}
