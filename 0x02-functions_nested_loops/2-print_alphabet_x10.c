#include "main.h"

/**
 * print_alphabet_x10 - is a function that prints 10 times the alphabet in lowercase
 *
 * Return: Always 0(success)
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; _putchar("abcdefghijklmnopqrstuvwxyz\n", i++));
	_putchar(i);
}
