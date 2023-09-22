#include "lists.h"
#include <stdio.h>

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
	print_before_main();
	printf("(A tortoise, having pretty good sense of a hare's nature, ");
	printf("challenges one to a race.)\n");

	return (0);
}
