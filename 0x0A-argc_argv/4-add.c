#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Print result followed by a new line
 * @argc: counts arg
 * @argv: Array of pointers to string
 * Return: 1
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;
	int num;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		num = atoi(argv[i]);

		if (num > 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
