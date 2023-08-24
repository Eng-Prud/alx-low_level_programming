#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: poiter to the modified string
 */

char *rot13(char *s)
{
	int i;
	char alphabet[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13_alphabet[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		char c = s[i];
		char *ptr = alphabet;
		char *rot13_ptr = rot13_alphabet;

		while (*ptr != '\0')
		{
			if (*ptr == c)
			{
				c = *rot13_ptr;
				break;
			}
			ptr++;
			rot13_ptr++;
		}
		s[i] = c;
	}
	return (s);
}
