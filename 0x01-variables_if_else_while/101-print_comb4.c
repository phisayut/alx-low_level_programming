#include <stdio.h>

/**
 * main- Entry point, print all combinations of three different digit
 * Return: Always 0 Sucess
 */

int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (z = 0; z <= 9; z++)
			{
				if ((x != y) && (y != z))
				{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
