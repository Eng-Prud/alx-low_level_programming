#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: count arguments
 * @argv: Array to pointers
 * Return: 0 for SUCCESS
 */

int main(int argc, char *argv[])
{
	int p = 0;

	while (p < argc)
	{
	printf("%s\n", argv[p]);
	p++;
	}
	return (0);
}
