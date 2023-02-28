#include "main.h"

/**
 * _puts - Display a string
 * @str: String
 *
 * Return: zero
 */

void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
