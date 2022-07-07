#include <stdio.h>

/**
 * _isupper - afunction that checks upper character
 * @c: input
 * Return: 1 if c is uppercase, otherwise return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
