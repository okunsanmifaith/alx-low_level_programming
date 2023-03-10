#include "main.h"
/**
 *times_table - Prints nine times table
 *Return: time table
 */
void times_table(void)
{
int i, k;
int a;

for (i = 0; i <= 9; i++)
{
for (k = 1; k <= 9; k++)
{
putchar(',');
putchar(' ');
a = i * k
putchar(a);
}
putchar('\n');
}
}
