#include <stdio.h>
/**
 *main-Entry level
 *printf-output sizes of various types in computer
 *Return: Displays 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

printf("size of a char: %zu byte(s)\n", sizeof(a));
printf("size of int: %zu byte(s)\n", sizeof(b));
printf("size of a long int: %zu byte(s)\n", sizeof(c));
printf("size of a long long int: %zu byte(s)\n", sizeof(d));
printf("size of a float: %zu byte(s)\n", sizeof(a));
return ("0");
}
