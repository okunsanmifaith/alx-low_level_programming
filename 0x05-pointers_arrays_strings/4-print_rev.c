#include "main.h"
/**
 * print_rev - Display string
 * @s: String
 * Return: void
 */
void print_rev(char *s)
{
int a, b;
for (a = 0; s[a] != '\0'; a++)
{
continue;
}
b = a - 1;
for (a = b; a >= 0; a--)
{
putchar(s[a]);
}
putchar('\n');
return;
}
