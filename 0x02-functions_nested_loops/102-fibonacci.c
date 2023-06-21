#include <stdio.h>

/**
 * main - print first 50 fibonacci nums
 * Return: 0
 */

int main(void)
{
	int count1;
	int count2 = 50;
	long x = 1;
	long y = 2;

	for (count1 = 1; count1 <= (count2 / 2); count1++)
	{
		printf("%li, %li, ", x, y);
		x += y;
		y += x;
	}
	if (count2 % 2 == 1)
		printf("%li", x);

	printf("\n");

	return (0);

}
