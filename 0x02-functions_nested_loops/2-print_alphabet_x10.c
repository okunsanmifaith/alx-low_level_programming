#include "main.h"

/**
 * print_alphabet_x10 - function to print alphabet x10
 *
 * Return: Always 0(success)
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 'a'; i <= 'z'; i++)
		for (j = 0; j < 10; j++)
			_putchar(i);
	_putchar('\n');
}
