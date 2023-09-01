#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: counts number of arguments
 * @argv: array of pointers to strings
 * Return: 0 for SUCCESS
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	int p = 1;

	if (argc > p)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
