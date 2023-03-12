#include "main.h"
/**
 * _isalpha - It checks for alphabetic character
 * @c: the character that's been checked
 * Return: 1 if c is a letter, and 0 otherwise
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
