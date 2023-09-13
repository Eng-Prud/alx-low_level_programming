#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry level
 * @argc: counts arg
 * @argv: Takes  the argumented counted
 * Return: 0 SUCCESS
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	char *operator;
	int (*operation)(int, int);
	int calc;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);
	operation = get_op_func(operator);

	if (operation == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	calc = operation(num1, num2);
	printf("%d\n", calc);
	return (0);
}
