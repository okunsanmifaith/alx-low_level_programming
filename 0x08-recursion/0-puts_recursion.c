#include <stdio.h>
/**
 *_puts_recursion - prints a string
 *@s: string character
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
print('\n');
printf("%c", *s);
_puts_recursion(++s);
}
