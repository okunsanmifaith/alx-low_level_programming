#include "main.h"
/**
 * add - to add integer
 * @i: a variable name
 * @j: also a variable name
 * Return: addition of two integer
 */
int add(int i, int j)
{
	int k = i + j;

	for (i <= 0; i >= 0; i++)
	{
		for (j <= 0; j >= 0; j++)
		{
			_putchar(k);
				_putchar('\n');
		}
	}
}

