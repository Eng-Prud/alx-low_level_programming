#include <stdio.h>

void print_before_main(void) __attribute__((constructor));

/**
 * print_before_main - Print before main
 */
void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

/**
 * main - Entry point
 * Return: 0 SUCCESS
 */

int main(void)
{
	printf("(A tortoise, having pretty good sense of a hare's nature, ");
	printf("challenges one to a race.)\n");

	return (0);
}
