#include "main.h"

/**
 * _islower - return one if owercase
 * @c: single output
 *Return: 1 if int c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
