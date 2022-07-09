#include "main.h"
/**
 * _isalpha - function to check alphabetic character
 * @c: a variable name
 * Return: Always0(success)
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
