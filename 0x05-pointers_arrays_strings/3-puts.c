#include "main.h"
/**
 * _puts - Display string
 * @str: String
 * Return: void
 */
void _puts(char *str)
{
int d;

for (d = 0; str[d] != '\0'; d++)
{
putchar(str[d]);
}
putchar('\n');
return;
}
