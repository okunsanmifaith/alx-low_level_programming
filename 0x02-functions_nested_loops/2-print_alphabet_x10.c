#include "main.h"

/**
 * print_alphabet_x10 - to print alphabet times ten
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
int i;
int j = 10;
int k;

for (i = 'a'; i <= 'z'; i++)
{
k = j * i;
putchar(k);
}
putchar('\n');
}
