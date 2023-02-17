#include <stdio.h>

/**
 * main- Entry point
 * @void: Null value
 *
 * Description: Print alphabet in reverse
 * Return: Zero value
 */

int main(void)
{
char n, a;
for (a = '0'; a <= '9'; a++)
putchar(a);
for (n = 'a'; n <= 'f'; n++)
putchar(n);
putchar('\n');
return (0);
}
