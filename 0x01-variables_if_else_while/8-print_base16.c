#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int j;
	char i;

	for (j = 0; j < 9; j++)
		putchar(j);
	for (i = 'a'; i >= 'i'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
