#include <stdio.h>

/**
 * main - prints the number
 * @argc: arguemnt counter
 * @argv: poinyer of array
 * Return: 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}

