#include "main.h"

/**
 *_isalpha - check for lowercase or uppercase alphabet
 *@c: ias an integer
 *Return: 1 if c is lowercase or uppercase otherwise 0
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else if (c <= 'A' && c <= 'Z')
return (1);
else
return (0);
}
