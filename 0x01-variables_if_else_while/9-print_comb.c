#include <stdio.h>

/**
 * main- Entry point
 * @void: Null value
 *
 * Description: Print numbers of base 16
 * Return: Zero value
 */

int main(void)
{
int n;
for (n = 0; n <= 9; n++)
  if (n != 9)
{
putchar(',');
putchar(' ');
}
putchar(n);
putchar('\n');
return (0);
}
