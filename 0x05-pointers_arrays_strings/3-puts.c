#include "main.h"
/**
 * _puts - Display string
 * @str: String
 * Return: void
 */
void _puts(char *str)
{
int a;

for (a = 0; str[a] != '\0'; a++)
{
putchar(str[a]);
}
putchar('\n');
return;
}
