#include "main.h"
/**
 *main - Prints a new line
 *
 *Return: Always 0
 */
int main(void)
{
char *jh = "_putchar";

while (*jh)
{
putchar(*jh);
jh++;
}
putchar('\n');

return (0);
}
