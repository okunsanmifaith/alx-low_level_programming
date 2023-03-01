#include "main.h"

/**
 * _puts - Display string
 * @str: String
 *
 * Return: Nothing
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
