#include "main.h"

/**
 * print_alphabet_x10 - function to print alphabet x10
 *
 * Return: Always 0(success)
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (i = 1; i <= 10; i++)
		for (j = 0; j < 10; j++)
			_putchar(i);
	_putchar('\n');
}
