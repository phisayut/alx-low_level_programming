#include <stdio.h>

/**
 * main - print name of program
 * @argc: argument counter
 * @argv: pointer to array of args
 * Return: 0 (sucess)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
