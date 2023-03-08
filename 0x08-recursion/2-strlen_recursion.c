#include <stdio.h>
#include <string.h>
/**
 *_strlen_recursion - prints length of a string
 *@s: string character
 *@l: integer
 *@strlen: length of string
 */
int _strlen_recursion(char *s)
{
int l;

l = 0;
if (*s == '\0')
return (0);

l = 1 +  _strlen_recursion(s + 1);
	
return (l);
}
