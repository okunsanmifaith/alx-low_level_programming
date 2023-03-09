#include "main.h"
/**
 *_strlen_recursion - prints length of a string
 *@s: string character
 *Return: length of string
 */
int _strlen_recursion(char *s)
{
int d;

d = 0;
if (*s == '\0')
return (0);

d = 1 +  _strlen_recursion(s + 1);
return (d);
}
