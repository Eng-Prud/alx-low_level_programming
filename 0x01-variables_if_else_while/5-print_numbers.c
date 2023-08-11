#include <stdio.h>
/**
 *main - Entry point
 *printf - output single digit numbers
 *
 *Return: Always 0 (SUCCESS)
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d\n", num);
		num++;
	}
	return (0);
}
