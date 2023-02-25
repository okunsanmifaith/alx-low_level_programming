#include "main.h"
/**
 *main - Prints a new line
 *
 *Return: Always 0
 */
int main(void)
{
char *jh = "main";

while (*jh)
{
putchar(*jh);
jh++;
}
putchar('\n');

return (0);
}
