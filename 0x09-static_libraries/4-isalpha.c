#include "main.h"

/**
 * _isalpha - Function that checks for alphabetic character
 * @c: letter to be manipulated
 *
 * Return: 1 if c is uppercase or lowercase
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
