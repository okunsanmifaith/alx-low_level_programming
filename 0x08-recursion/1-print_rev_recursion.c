#include <stdio.h>
/**
 *_print_rev_recursion - print the reverse of a string
 *@s: string character
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
printf("%c", *s);
}
}
