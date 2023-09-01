#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - program that prints the minimum number of
 * coins to make change for an amount of money
 * @argc: counts arg
 * @argv: Array of pointers to a string
 * Return: 1 for error 0 for SUCCESS
 */

int main(int argc, char *argv[])
{
	int num;
	int p;
	int result;
	int coins [] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (p = 0; p < 5 && num >= 0; p++)
	{
		while (num >= coins[p])
		{
			result++;
			num -= coins[p];
		}
	}
	printf("%d\n", result);
	return (0);
}
