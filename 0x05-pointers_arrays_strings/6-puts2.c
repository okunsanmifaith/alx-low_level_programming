#include "main.h"
/**
 *puts2 - prints every other character
 *@str: strings character
 *
 *Return: void
 */
void puts2(char *str)
{
int i;
char s[i];

for (int i = 0; i < strlen(str); i+=2)
{
putchar (str[i]);
s[i/2] = str[i];
}
return 0;
}
