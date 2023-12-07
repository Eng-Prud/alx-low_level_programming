#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a key depending on a username for crackme5
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int index, beta;
	size_t length, add;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	length = strlen(argv[1]);
	p[0] = l[(length ^ 59) & 63];
	for (index = 0, add = 0; index < length; index++)
		add += argv[1][index];
	p[1] = l[(add ^ 79) & 63];
	for (index = 0, beta = 1; index < length; index++)
		beta *= argv[1][index];
	p[2] = l[(beta ^ 85) & 63];
	for (beta = argv[1][0], index = 0; index < length; index++)
		if ((char)beta <= argv[1][index])
			beta = argv[1][index];
	srand(beta ^ 14);
	p[3] = l[rand() & 63];
	for (beta = 0, index = 0; index < length; index++)
		beta += argv[1][index] * argv[1][index];
	p[4] = l[(beta ^ 239) & 63];
	for (beta = 0, index = 0; (char)index < argv[1][0]; index++)
		beta = rand();
	p[5] = l[(beta ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
