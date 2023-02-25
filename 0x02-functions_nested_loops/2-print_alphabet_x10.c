#include "main.h"

/**
 * print_alphabet_x10 - to print alphabet times ten
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
int i;
int j;

while (j < 10)
{
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
j++;
}
putchar('\n');
}
