#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 success
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 9; num1++) /*print tens place*/
	{
		for (num2 = 0; num2 <= 9; num2++) /*print ones place*/
		{
			if (!(num1 == 9 && num2 == 9)) /*skip comma at end*/
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
