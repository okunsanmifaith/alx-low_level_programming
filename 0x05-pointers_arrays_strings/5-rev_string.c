#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string character
 * Return: void
 */
void rev_string(char *s)
{
int a, b;
char i[500];
b = 0;
a = 0;
while (*(s + b))
{
*(a + b) = *(s + b);
b++;
}
b = b - 1;
while (b >= 0)
{
*(s + b) = *(i + a);
a++;
b--;
}
}
