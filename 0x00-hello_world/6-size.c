#include <stdio.h>

/**
 *Main - Entry point
 *Printf()-outputs size of types
 *
 *Return: 0 (SUCCESS)
 */

int main(void)
{
	prinf("Size of a char: %zu byte(s)\n", sizeof(char));
	prinf("Size of a int: %zu byte(s)\n", sizeof(int));
	prinf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	prinf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	prinf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
