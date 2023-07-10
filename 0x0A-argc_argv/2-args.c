#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: argumrnt counter
 * @argv: pointer to array of args
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);

	return (0);
}
