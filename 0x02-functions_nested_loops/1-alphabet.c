#include "main.h"

/**
 * print_alphabet - a function to print alphabet in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
int i;

for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
}
