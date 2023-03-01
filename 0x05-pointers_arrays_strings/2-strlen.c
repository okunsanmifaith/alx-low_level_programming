#include "main.h"

/**
 *_strlen - Print length of a string
 *@s : a character
 *Rrturn: length of string s
 */
int _strlen(char *s)
{
int x = 0;
while (*s != '\0')
{
s++;
x++;
}
return (x);
}
