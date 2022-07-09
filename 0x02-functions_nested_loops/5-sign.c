#include "main.h"
/**
 * print_sign - print the sign number
 * @n: a variable name
 * Return: Always 0(success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-");
		return (-1);
	}
}
