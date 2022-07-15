#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0(success)
 */
int main(void)
{
	int n, i = 0;

	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			i += n;
		}
	}
	_putchar('\n');
}
