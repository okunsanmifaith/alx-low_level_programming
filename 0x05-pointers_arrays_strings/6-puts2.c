#include "main.h"
/**
 *puts2 - prints every other character
 *@str: pointer character
 *
 *Return: void
 */
void puts2(char *str)
{
int i, c;

i = 0;
c = 0;
while (str[i++])
{
c++;
}
for (i = 0; i < c; i += 2)
{
putchar (*(str + i));
}
putchar ('\n');
}
