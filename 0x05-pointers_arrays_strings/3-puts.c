#include "main.h"
/**
 * _puts - Display string
 * @str: String
 */

void _puts(char *str)
{
int a;

while (*(str + a) != '\0')
{
putchar(*(str + a));
a++;
}
putchar('\n');
}
