#include <stdio.h>
/**
 *main-Entry level
 *printf-output sizes of various types in computer
 *Return: Displays 0 (SUCCESS)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

printf("size of a char: %lu byte(s)\n", (unsigned int) sizeof(a));
printf("size of int: %lu byte(s)\n", (unsigned int) sizeof(b));
printf("size of a long int: %lu byte(s)\n", (unsigned int) sizeof(c));
printf("size of a long long int: %lu byte(s)\n", (unsigned int) sizeof(d));
printf("size of a float: %zu byte(s)\n", sizeof(a));
return ("0");
}
