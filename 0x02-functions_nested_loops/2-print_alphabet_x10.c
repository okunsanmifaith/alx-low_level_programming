#include "main.h"

/**
 * print_alphabet_x10 - function to print alphabet x10
 *
 * Return: Always 0(success)
 */
void print_alphabet_x10(void)
{
	int j, i;

	i = 0;

	while (i < 10)
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
	i++;
	_putchar('\n');
}
