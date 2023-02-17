#include <stdio.h>
/**
 *main - Entry ppoint
 *
 *Description: print lowercase alphabet except q and e
 *Return: Always 0
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
if (c == 'e' || c == 'e')
continue;
putchar(c);
putchar('\n');
return (0);
}
